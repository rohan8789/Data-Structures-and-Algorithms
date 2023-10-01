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

///we can solve it using stack too
int c=0;
int kthSmallest(BTNodes<int> *root, int k)
{
    int l, r;
    if(root==NULL)
    {
        return -1;
    }
    if(root!=NULL)
    {
        l=kthSmallest(root->left, k);
        c++;
        if(c==k)
        {
            return root->data;
        }
        r=kthSmallest(root->right, k);
    }
    return max(l, r);

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
    cout<<endl<<endl;
    int k;
    cin>>k;
    kthSmallest(root, k);
    cout<<endl;
return 0;
}