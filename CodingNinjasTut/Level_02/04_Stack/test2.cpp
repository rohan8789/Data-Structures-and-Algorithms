#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    vector<TreeNode*> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode* takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
    cin>>rootData;
    TreeNode* root = new TreeNode(rootData);
    int n;
    cout<<"Enter number of children of rootData: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {}
}

int main()
{
    TreeNode* root1 = takeInput();
return 0;
}