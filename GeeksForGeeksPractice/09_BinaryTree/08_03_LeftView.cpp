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

void leftView(BTNode<int> *root)
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
        int count=q.size();
        for(int i=0; i<count; i++)
        {
            if(i==0)
            {
                cout<<root->data<<" ";
            }
            if(root->left!=NULL)
            {
                q.push(root->left);
            }
            if(root->right!=NULL)
            {
                q.push(root->right);
            }
        }
    }
}


int main()
{
    BTNode<int> *root = takeInput();
    print(root);
    cout<<endl;
    leftView(root);
return 0;
}