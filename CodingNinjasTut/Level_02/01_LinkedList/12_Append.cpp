// AppendLastNToFirst
// Given a linked list and an integer n, append the last n elements of the LL to front.
// Indexing starts from 0. You don't need to print the elements, just update the elements and return the head of updated LL.
// Assume given n will be smaller than length of LL.
// Input format :
// Line 1 : Linked list elements (separated by space and terminated by -1)`
// Sample Input 1 :
// 1 2 3 4 5 -1
// 3
// Sample Output 1 :
// 3 4 5 1 2


// STEP 1: Declare the function appendNNode with parameters (Node* head, int n)
// STEP 2: Declare two variables Node * temp , t and point both of them to head.
// STEP 3: Declare int i = -n
// STEP 4: Repeat Step 5 and 6, while(temp->next != NULL)
// STEP 5: if(i>=0) t = t-> next.
// STEP 6: temp = temp-> next, i++.
// STEP 7: temp->next = head, head = t->next, and t-> next =NULL
// STEP 8: return head


#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data; 
    Node *next;
};

Node *createNode()
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
            head=freshNode;
            tail=freshNode;
        }
        else
        {
            tail->next=freshNode;
            tail = tail->next;
        }
        cin>>n;
    }
    return head;
}


int Length(Node* head)
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


Node* Append(Node *head, int len, int n)
{
    Node *temp=head;
    Node *newHead;
    int count=0;
    while(temp!=NULL && count<len-n)
    {
        count++;
    }
    if(temp!=NULL)
    {
        newHead = temp;
    }

    Node *head2 = temp;
    temp->next = NULL;
    
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
    Node *head =createNode();
    print(head);
    int len = Length(head);
    int n;
    cin>>n;
    Append(head, len, n);
return 0;
}