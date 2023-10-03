#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next=NULL;
    }

};

void print(Node *head)
{
    //Never iterate over head, rather create a temproary variable for iteration
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node *n1 = new Node(10);
    Node *head = n1;

    Node *n2 =new Node(20);
    n1->next = n2;

    Node *n3 =new Node(30);
    n2->next = n3; 

    Node *n4 = new Node(40);
    n3->next = n4;

    Node *n5 = new Node(50);
    n4->next = n5;

    n5->next = NULL;

    print(head);
return 0;
}