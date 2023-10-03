#include<stdio.h>
int main()
{
int acount=0,bcount=0;
int s, t;
scanf("%d %d",&s, &t);
int a, b;
scanf("%d %d",&a, &b);
int m, n;
scanf("%d %d",&m, &n);
int apple[m], orange[n];
int i,j;
for(i=0;i<m;i++)
{
    scanf("%d",&apple[i]);
    apple[i]=a+apple[i];
    if(apple[i]>=s&&apple[i]<=t)
    {
        acount++;
    }
}
printf("%d\n",acount);
for(int j=0; j<n;j++)
{
    scanf("%d",&orange[j]);
    orange[j]=b+orange[j];
    if(orange[j]>=s&&orange[j]<=t)
    {
        bcount++;
    }
    printf("%d\n",bcount);
}
}