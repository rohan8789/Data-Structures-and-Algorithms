#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
    T data;
    Node<T> *next;
    public: 
};

template<typename T>
class Stack{
    Node<T> *head;
    int size;
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    int returnSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(T x){
        Node<T> *freshNode = new Node<T>();
        freshNode->data=x;
        if(head==NULL){
            head=freshNode;
        }
        else{
            
        }
    }
};

int main()
{
    Stack<int> s;
return 0;
}