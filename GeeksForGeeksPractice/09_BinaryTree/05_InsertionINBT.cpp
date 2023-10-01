#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BTNodes
{
    public:
    T data;
    BTNodes<T> *left;
    BTNodes<T> *right;
    BTNodes(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BTNodes()
    {
        delete left;
        delete right;
    }
};

BTNodes<int>* insert(BTNodes<int> *root, int data)
{
    if(root==NULL)
    {
        BTNodes<int> *newNode = new BTNodes<int>(data);
        return newNode;
    }
    
    root->left=insert(root->left, data);
    root->right=insert(root->right, data);
    return root;
}


BTNodes<int>* takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BTNodes<int> *root = new BTNodes<int>(rootData);
    queue<BTNodes<int>* > q;
    q.push(root);
    while(!q.empty())
    {
        BTNodes<int> *front = q.front();
        q.pop();
        int leftChild;
        cout<<"Enter left child of "<<front->data<<": ";
        cin>>leftChild;
        if(leftChild!=-1)
        {
            BTNodes<int> *child = new BTNodes<int>(leftChild);
            front->left=child;
            q.push(child);
        }
        int rightChild;
        cout<<"Enter right child of "<<front->data<<": ";
        cin>>rightChild;
        if(rightChild!=-1)
        {
            BTNodes<int> *child = new BTNodes<int>(rightChild);
            front->right=child;
            q.push(child);
        }
    }
    return root;
}


void print(BTNodes<int>* root)
{
    if(root==NULL){
        return;
    }

    cout<<root->data<<": ";
    if(root->left!=NULL){
        cout<<"L: "<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R: "<<root->right->data;
    }
    cout<<endl;

    print(root->left);
    print(root->right);
}

int main()
{
    
    
    BTNodes<int> *root=takeInput();
    print(root);
    //printTree(root);
return 0;
}