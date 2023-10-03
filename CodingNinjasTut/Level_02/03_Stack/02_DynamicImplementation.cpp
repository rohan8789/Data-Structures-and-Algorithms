#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int count;
    int capacity;
    public:
    Stack()
    {
        arr = new int[6];
        count=0;
        capacity=6;
    }
    int size()
    {
        return count;
    }
    bool isEmpty()
    {
        if(count==0)
            return true;
        else
            return false;
    }
    void push(int element)
    {
        if(count==capacity)
        {
            int *newArr = new int[2*capacity];
            for(int i=0; i<capacity; i++)
            {
                newArr[i] = arr[i];
            }
            capacity = capacity*2;
            delete[]arr;
            arr=newArr;
        }
        arr[count]=element;
        count++;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return INT_MIN;
        }
        count--;
        return arr[count];
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return arr[count-1];
    }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // cout<<s.isEmpty()<<endl;
return 0;
}