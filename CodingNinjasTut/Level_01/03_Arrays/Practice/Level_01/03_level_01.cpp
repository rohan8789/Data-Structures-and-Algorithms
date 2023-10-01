// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=n-1; i>=0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}