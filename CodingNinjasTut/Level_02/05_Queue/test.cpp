#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    q.push(1);
 
    priority_queue<int>pq;
    int arr[6]={2,7,4,1,8,5};
    for(int i=0; i<6; i++){
        pq.push(arr[i]);
    }
    
    cout<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
return 0;
}