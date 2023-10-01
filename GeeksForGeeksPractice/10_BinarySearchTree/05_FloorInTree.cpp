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
};

int FloorInTree(BST<int> *root, int x)
{
    
}

BST<int> *Insert(BST<int> *root, int n)
{
    if(root==NULL)
    {
        BST<int> *r = new BST<int>(n);
        return r;
    }
    if(n<=root->data)
    {
        root->left=Insert(root->left, n);
    }
    else{
        root->right=Insert(root->right, n);
    }
    return root;
}

BST<int>* takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BST<int> *root=new BST<int>(rootData);
    int data;
    cout<<"Enter data to form tree: ";
    cin>>data;
    while(data!=-1)
    {
        cout<<"Enter data to form tree: ";
        root = Insert(root, data);
        cin>>data;
    }
    return root;
}

void print(BST<int> *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
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
    BST<int> *root=takeInput();
    print(root);
    int ans=FloorInTree(root, 14);
    cout<<endl<<endl;
    cout<<ans<<endl;
return 0;
}