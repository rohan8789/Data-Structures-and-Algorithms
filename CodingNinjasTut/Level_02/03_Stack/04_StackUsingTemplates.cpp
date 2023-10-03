#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack
{
    T *arr;
    int count;
    int capacity;
    public:
    Stack()
    {
        arr = new int[4];
        count=0;
        capacity = 4;
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
    void push(T element)
    {
        if(count==capacity)
        {
            T *newArr = new T[2*capacity];
            for(int i=0; i<capacity; i++)
            {
                newArr = arr;
            }
            capacity = capacity*2;
            delete[]arr;
            arr = newArr;
        }
        arr[count] = element;
        count++;
    }

    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        count--;
        return arr[count];
    }

    T top()
    {
        return arr[count-1];
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;


return 0;
}