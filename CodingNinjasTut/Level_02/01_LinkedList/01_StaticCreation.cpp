#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        next = NULL;
    }
};

int main()
{
    //statically
    Node n1(10);
    Node *head = &n1;

    Node n2(12);

    n1.next = &n2;
    cout<<n1.data<<" "<<n2.data<<endl<<endl;

    cout<<head->data<<endl;



return 0;
}