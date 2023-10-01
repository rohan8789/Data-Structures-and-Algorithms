//common element in 3 arrays
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> common(int A[], int B[], int c[], int n1, int n2, int n3)
    {
        int *D = new int[2];
        vector<int> v;
        int i=0, j=0, k=0, m=0;
        while(i<n1 && j<n2 && k<n3)
        {
            if(A[i]<B[j]&& A[i]&&c[k])
            {
                i++;
            }
            else if(B[j]<A[i]&& B[j]<c[k])
            {
                j++;
            }
            else if(c[k]<A[i] && c[k]<B[j])
            {
                k++;
            }
            else{
                D[m] = A[i];
                i++;j++;k++;m++;
            }
        }
        while(i<n1)
            i++;
        while(j<n2)
            j++;
        while(k<n3)
            k++;
        
        for(i=0; i<2; i++)
        {
            //cout<<D[i]<<" ";
            v[i]=D[i];
        }
        return v;
    }
};

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int *arr1= new int[n1];
    int *arr2 =new int[n2];
    int *arr3 =new int[n3];

    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    for(int i=0; i<n3; i++)
    {
        cin>>arr3[i];
    }
    solution ob;
    vector<int> ans = ob.common(arr1,arr2,arr3,n1,n2,n3);
    if(ans.size()==0)
    {
        cout<<-1;
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
return 0;
}