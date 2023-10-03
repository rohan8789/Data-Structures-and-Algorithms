#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* create()
{
    int n;
    cin>>n;
    Node *head = NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data = n;
        if(head==NULL)
        {
            head = freshNode;
            tail = freshNode;
        }
        else
        {
            tail->next = freshNode;
            tail=tail->next;
        }
        cin>>n;
    }
    return head;
}

int print(Node *head, int i)
{
    int count=0, save=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        if(count==i){
            save = temp->data;
        }
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    return save;
}

int main()
{
    Node *head = create();
    int i;
    cin>>i;
    int z =print(head, i);
    cout<<endl<<endl;
    cout<<z<<endl;
return 0;
}