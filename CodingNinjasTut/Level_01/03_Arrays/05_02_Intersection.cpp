// merging two array into one array
#include <iostream>
using namespace std;

void merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            c[k]=a[i];
            k++;i++;j++;
        }
    }
    while(i<m)
    {
        i++;
    }
    while(j<n)
    {
        j++;
    }
    
}
int main()
{
    int i;
    int a[] = {1,2,3,5,7,8,9};
    int b [] = {5, 7, 8, 9, 10, 60};
    int c[10];
    merge(a, b, c, 6, 5);

    for (i = 0; i <3; i++)
    {
        cout << c[i] << " ";
    }
}