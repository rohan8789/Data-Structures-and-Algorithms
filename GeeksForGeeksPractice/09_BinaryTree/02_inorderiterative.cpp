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
    ~BTNodes(){
        delete left;
        delete right;
    }
};

BTNodes<int> *takeInput()
{
    int rootData;
    cout<<"Enter rootData: ";
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BTNodes<int> *root=new BTNodes<int>(rootData);
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
            BTNodes<int> *child =new BTNodes<int>(leftChild);
            front->left=child;
            q.push(child);
        }
        int rightChild;
        cout<<"Enter right child of "<<front->data<<": ";    
        cin>>rightChild;
        if(rightChild!=-1)
        {
            BTNodes<int> *child =new BTNodes<int>(rightChild);
            front->right=child;
            q.push(child);
        }
    }
    return root;
}

void iterativeInOrder(BTNodes<int> *root)
{
    stack<BTNodes<int>* > s;
    BTNodes<int> *curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

int main()
{
    BTNodes<int> *root = takeInput();
    iterativeInOrder(root);
return 0;
}