#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    //Using this way we might loose our head to avoid this, we should use a temproary variable. its always a good Idea.
    // while (head != NULL)
    // {
    //     cout << head->data << " ";
    //     head = head->next;
    // }
}


//When You wish to print n-1 data only
// void print(Node *head)
// {
//     while (head->next != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

int main()
{
    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    n1.next = &n2;

    Node n3(3);
    n2.next = &n3;

    Node n4(4);
    n3.next = &n4;

    Node n5(5);
    n4.next = &n5;

    print(head);
    // n5.next is already NULL above in constructor
    return 0;
}