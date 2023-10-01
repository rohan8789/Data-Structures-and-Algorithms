#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BinaryTreeNode
{
    public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

BinaryTreeNode<int>* takeInput()
{
    int rootData;
    cout<<"Enter root Data: ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(q.size()!=0)
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        int leftChildData;
        cout<<"Enter left child Data of "<<front->data<<": ";
        cin>>leftChildData;
        if(leftChildData!=-1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left=child;
            q.push(child);
        }
        int rightChildData;
        cout<<"Enter right child Data of "<<front->data<<": ";
        cin>>rightChildData;
        if(rightChildData!=-1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right=child;
            q.push(child);
        }
    }
    return root;
}

void printTree(BinaryTreeNode<int>* root)
{
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();
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

int main()
{
    BinaryTreeNode<int>* root = takeInput();
    printTree(root);
    delete root;


return 0;
}