#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int *arr, int n)
{
    int k;
    for(int i=0; i<n-1; i++)
    {
        k=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[k]>arr[j])
            {
                k=j;
            }
        }
        if(k!=i){
            swap(arr[i], arr[k]);
        }
    }
}

int main()
{
    cout<<endl<<endl;
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int *arr= new int[n];
    cout<<"Enter "<<n<<" Different element: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array in sorted Order: ";
    SelectionSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
return 0;
}