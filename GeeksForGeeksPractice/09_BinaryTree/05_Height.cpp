#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BTNode
{
    public:
    T data;
    BTNode<int> *left;
    BTNode<int> *right;
    BTNode(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

BTNode<int> *takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
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
        int leftChild;
        cout<<"Enter left child of "<<front->data<<": ";
        cin>>leftChild;
        if(leftChild!=-1)
        {
            BTNode<int> *child = new BTNode<int>(leftChild);
            front->left=child;
            q.push(child);
        }
        int rightChild;
        cout<<"Enter right child of "<<front->data<<": ";
        cin>>rightChild;
        if(rightChild!=-1)
        {
            BTNode<int> *child = new BTNode<int>(rightChild);
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
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int height(BTNode<int> *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}

int main()
{
    queue<int> q;
    
    BTNode<int> *root = takeInput();
    print(root);
    int h=height(root);
    cout<<endl;
    cout<<h<<endl;
return 0;
}
