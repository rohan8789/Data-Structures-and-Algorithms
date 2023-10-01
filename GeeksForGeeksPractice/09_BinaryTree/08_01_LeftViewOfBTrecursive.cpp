#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BTNode
{
    public:
    BTNode<T> *left;
    BTNode<T> *right;
    T data;
    BTNode(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
//1 2 3 -1 -1 4 6 -1 5 -1 -1 7 -1
BTNode<int>* takeInput()
{
    int rootData;
    cout<<"ENter rootData: ";
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BTNode<int> *root = new BTNode<int>(rootData);
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        BTNode<int> *front=q.front();
        q.pop();
        int leftData;
        cout<<"Enter left child data of "<<front->data<<": ";
        cin>>leftData;
        if(leftData!=-1){
            BTNode<int> *child =new BTNode<int>(leftData);
            front->left=child;
            q.push(child);
        }
        int rightData;
        cout<<"Enter right child Data of "<<front->data<<": ";
        cin>>rightData;
        if(rightData!=-1)
        {
            BTNode<int> *child = new BTNode<int>(rightData);
            front->right=child;
            q.push(child);
        }
    }
    return root;
}

void print(BTNode<int> *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<BTNode<int>*>q;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        BTNode<int> *front=q.front();
        q.pop();
        if(front->left!=NULL)
        {
            cout<<front->left->data<<" ";
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            cout<<front->right->data<<" ";
            q.push(front->right);
        }
    }
}

int maxlevel=0;
void printleft(BTNode<int> *root, int level)
{
    if(root==NULL)
    {
        return;
    }
    //cout<<level<<" "<<maxlevel<<endl;
    if(maxlevel<level)
    {
        cout<<root->data<<" ";
        maxlevel=level;
    }
    printleft(root->left, level+1);
    printleft(root->right, level+1);
}

void leftView(BTNode<int> *root)
{
    printleft(root, 1);
}


int main()
{
    BTNode<int> *root = takeInput();
    print(root);
    cout<<endl;
    leftView(root);
return 0;
}