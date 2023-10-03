#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, w, max = 0, p1 = 0, p2 = 0;
    cin >> t;
    while (t--)
    {
        int  lead;
        int a, b;
        cin >> a >> b;
        p1 = p1 + a;
        p2 = p2 + b;

        if(abs(p1-p2)>max)
        {
            max = abs(p1-p2);
            if(p1>p2)
            {
                w=1;
            }
            else
            {
                w=2;
            }
        }
    }
    cout<<w<<" "<<max<<endl;
    return 0;
}