#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
    public:
    T data;
    Node<T> *left;
    Node<T> *right;
    Node(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~Node()
    {
        delete left;
        delete right;
    }
};

Node<int> *takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
    cin>>rootData;
    if(rootData==-1)
        return NULL;
    Node<int> *root = new Node<int>(rootData);
    queue<Node<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        Node<int> *front = q.front();
        q.pop();
        int leftChild;
        cout<<"Enter left child of "<<front->data<<": ";
        cin>>leftChild;
        if(leftChild!=-1)
        {
            Node<int> *child = new Node<int>(leftChild);
            front->left=child;
            q.push(child);
        }
        int rightChild;
        cout<<"Enter right child of "<<front->data<<": ";
        cin>>rightChild;
        if(rightChild!=-1)
        {
            Node<int> *child= new Node<int>(rightChild);
            front->right=child;
            q.push(child);
        }
    }
    return root;
}

void print(Node<int> *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main()
{
    Node<int> *root=takeInput();
    print(root);
return 0;
}