
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

int print(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    else{
        return 1+ print(head->next);
    }

}
int main()
{
    Node *head = createNode();
    int z =print(head);
    cout<<z<<endl;
return 0;
}