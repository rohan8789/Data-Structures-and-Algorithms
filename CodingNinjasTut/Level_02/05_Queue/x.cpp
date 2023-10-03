#include<bits/stdc++.h>
using namespace std;


class Stack{
    int data;
    Stack *next;
    int size;
    public:
    Stack(){
        next=NULL;
        size=0;
    }
    int size(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    int push(int e){
        Stack *freshNode=NULL;
        freshNode->data=e;
        
    }
}

int main()
{

return 0;
}