#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BST
{
    public:
    T data;
    BST<T> *left, *right;
    BST(T data)
    {
        this->data=data;
        left=right=NULL;
    }
    ~BST()
    {
        delete left;
        delete right;
    }
};

BST<int> *insert(BST<int> *root, int data)
{
    BST<int> *r = new BST<int>(data);
    BST<int> *parent=NULL;
    BST<int> *curr=root;
    while(curr!=NULL)
    {
        parent=curr;
        if(curr->data==data)
        {
            return root;
        }
        if(data<curr->data)
        {
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
    if(parent==NULL)
    {
        return r;
    } 
    if(data<parent->data)
    {
        parent->left=r;
    }
    else{
        parent->right=r;
    }
    return root;
 
}

BST<int> *takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
    cin>>rootData;
    if(rootData==-1)
        return NULL;
    BST<int> *root = new BST<int>(rootData);
    int data;
    cout<<"Enter data to for BST: ";
    cin>>data;
    while(data!=-1)
    {
        root = insert(root, data);
        cout<<"Enter data to form BST: ";
        cin>>data;
    }
    return root;
}

void print(BST<int> *root)
{
    if(root==NULL)return;
    cout<<root->data<<": ";
    if(root->left!=NULL)
    {
        cout<<"L: "<<root->left->data<<", ";
    }
    
    if(root->right!=NULL)
    {
        cout<<"R: "<<root->right->data<<", ";
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}


int main()
{
    BST<int> *root = takeInput();
    print(root);
return 0;
}