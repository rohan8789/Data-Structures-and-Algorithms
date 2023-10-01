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
    if(data<=root->data)
    {
        root->left=insert(root->left, data);
    }
    else{
        root->right=insert(root->right, data);
    }
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
    int data;
    cout<<"Enter data: ";
    cin>>data;
    while(data!=-1)
    {
        cout<<"Enter data: ";
        root =insert(root,data);
        cin>>data;
    }
    return root;
}

int getmax(BTNodes<int> *root)
{
    BTNodes<int> *temp=root;
    while(temp!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}

int getmin(BTNodes<int> *root)
{
    BTNodes<int> *temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}

bool checkBST(BTNodes<int> *root)
{
    BTNodes<int> *curr=root;
    if(root==NULL)
    {
        return true;
    }
    int m1 = getmax(curr->left);
    int m2 = getmin(curr->right);
    if(root->left!=NULL && m1>root->data || root->right!=NULL && m2<root->data)
    {
        return false;
    }
    if(checkBST(root->left) && checkBST(root->right))
    {
        return true;
    }
    else{
        return false;
    }
}


void print(BTNodes<int>* root)
{
    if(root==NULL){
        return;
    }

    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main()
{
    
    
    BTNodes<int> *root=takeInput();
    print(root);
    cout<<endl<<endl;
    bool ans=checkBST(root);
    cout<<ans<<endl;
    cout<<endl;
return 0;
}
