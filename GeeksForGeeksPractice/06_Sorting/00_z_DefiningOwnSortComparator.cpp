#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;

};

bool cmp(point p1, point p2){
    return p1.x<p2.x;
}

int main()
{
    point arr[]={{3,10},{2,9}, {5,11}};
    int n=sizeof(arr)/sizeof(int);
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++){
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }
return 0;
}