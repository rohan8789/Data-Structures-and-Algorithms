#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BTNode
{
    public:
    T data;
    BTNode<T> *left;
    BTNode<T> *right;
    BTNode(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BTNode()
    {
        delete left;
        delete right;
    }
};

BTNode<int> *takeInput()
{
    int rootData;
    cout<<"ENter rootData: ";
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BTNode<int> *root = new BTNode<int>(rootData);
    queue<BTNode<int> *>q;
    q.push(root);
    while(!q.empty())
    {
        BTNode<int> *front = q.front();
        q.pop();
        int leftData;
        cout<<"Enter left data of "<<front->data<<": ";
        cin>>leftData;
        if(leftData!=-1)
        {
            BTNode<int> *child = new BTNode<int>(leftData);
            front->left=child;
            q.push(child);
        }
        int rightData;
        cout<<"Enter right data of "<<front->data<<": ";
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
        return;
    queue<BTNode<int> *> q;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        BTNode<int> *front = q.front();
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

int Maximum(BTNode<int> *root)
{
    if(root==NULL)
    {
        return -1;
    }
    int max=root->data;
    int x=Maximum(root->left);
    int y=Maximum(root->right);
    if(x>max)
    {
        max=x;
    }
    if(y>max)
    {
        max=y;
    }
    
    return max;
}

int main()
{
    BTNode<int> *root = takeInput();
    print(root);
    cout<<endl;
    int ans=Maximum(root);
    cout<<ans<<endl;
return 0;
}