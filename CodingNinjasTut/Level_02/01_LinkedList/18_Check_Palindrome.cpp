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
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data=n;
        if(head==NULL)
        {
            head=freshNode;
            tail = freshNode;
        }
        else{
            tail->next=freshNode;
            tail = tail->next;
        }
        cin>>n;
    }
    return head;
}

bool checkPalindrome(Node *head)
{
    Node *temp = head;
    if(head==NULL || head->next==NULL)
        return true;
}


int Length(Node *head)
{
    int count=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node *head= createNode();
    print(head);
    int len = Length(head);
    cout<<len<<endl;
    // bool ans = checkPalindrome(head);
return 0;
}