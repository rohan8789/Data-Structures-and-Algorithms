#include <stdio.h>

char* fun(int *x, int *y, int *z)
{
    *x = (*x-*z);
    *y = (*y-*z);
        if(*x>*y)
        {
            return "Cat B";
        }
        else if(*y==*x)
        {
            return "Mouse C";
        }
        else {
            return "Cat A";
        }
}


int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        char *m[30];
        
        *m = fun(&x, &y, &z);
        printf("%s", *m);
        
    }
}
