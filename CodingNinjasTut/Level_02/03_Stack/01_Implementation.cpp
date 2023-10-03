#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int count;
    int capacity;
    public:
    Stack(int totalSize)
    {
        arr = new int[totalSize];
        count=0;
        capacity = totalSize; 
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
        
        //return count==0;
    }
    void push(int element)
    {
        if(count==capacity)
        {
            cout<<"Stack Overflow"<<endl;
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
            cout<<"Stack underflow"<<endl;
            return INT_MIN;
        }
        return arr[count-1];
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;


return 0;
}