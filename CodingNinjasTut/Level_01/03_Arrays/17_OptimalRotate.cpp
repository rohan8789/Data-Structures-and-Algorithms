#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class treenode
{
public:
    int data;
    vector<treenode *> children;
    treenode(int d)
    {
        this->data = d;
    }
};
void printtree(treenode *root)
{
    queue<treenode *> q1;
    q1.push(root);
    cout<<root->data ;
    while (q1.size() != 0)

    {
        treenode *front = q1.front();
        q1.pop();
 
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data;
            q1.push(front->children[i]);
        }
    }
}

treenode *input()
{
    int d, n;
    cout << "enter your data \n";
    cin >> d;
    treenode *root = new treenode(d);
    queue<treenode *> q;
    q.push(root);
    while (q.size() != 0)
    {
        treenode *front = q.front();
        q.pop();
        cout << "enter the number of child of " << front->data << ":-'\n";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "enter the " << i << "th data of " << front->data << "\n";
            int data;
            cin >> data;
            treenode *child = new treenode(data);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}
int main()
{
    treenode *root = input();
    printtree(root);
    return 0;
}