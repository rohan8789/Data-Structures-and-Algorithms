#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //int c[10] = {0};
    unordered_map<int,int> c;
    for(int i=0; i<n; i++)
    {
        c[arr[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(c[arr[i]]>1)
        {
            x=i;
            break;
        }
        else{
            x=-1;
        }
    }
    cout<<x<<endl;
return 0;
}


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
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 cout<<i<<", "<<arr[j]<<", "<<arr[i]<<endl;
//                 break;
//             }
//         }
//     }
// return 0;
// }