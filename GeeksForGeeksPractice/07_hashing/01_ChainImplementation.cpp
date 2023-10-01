#include<bits/stdc++.h>
using namespace std;

class MyHash
{
    int bucket;
    list<int> *table;
    public:
    MyHash(int b)
    {
        bucket=b;
        table = new list<int>[b];
    }
    void insert(int key){
        int i = key%bucket;
        table[i].push_back(key);
    }
    void Delete(int key){}
    bool search(int key){}
    void display(){
        for(int i=0; i<bucket; i++)
        {
            cout<<i<<" ";
            for(auto x: table[i])
            {
                cout<<"-"<<x<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int arr[]={70,71,9,56,72};
    int n=sizeof(arr)/sizeof(int);

    MyHash h(7);
    for(int i=0; i<n; i++)
    {
        h.insert(arr[i]);
    }
    
    h.display();
    
return 0;
}