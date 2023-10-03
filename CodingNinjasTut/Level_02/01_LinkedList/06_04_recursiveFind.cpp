#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* createNode()
{
    int n;
    cin>>n;
    Node *head = NULL;
    Node* tail = NULL;
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
            tail = tail->next;     
        }
        cin>>n;
    }
    return head;
}

int print(Node *head, int i)
{
    int count=0, save;
    if(head==NULL)
        return 0;
    if(head!=NULL)
    {
        if(count==i)
            save = head->data;
        count++;
        print(head->next, i);
    }
    return save;
}
int main()
{
    Node *head = createNode();
    int i;
    cin>>i;
    int z =print(head, i);
    cout<<z<<endl;
return 0;
}