#include <bits/stdc++.h>
using namespace std;
  
string factorial(long long n)
{
    if (n > INT_MAX) {
        cout << " Integer Overflow"
             << endl;
        return "";
    }
  
    long long i;
    long double sum = 0;
 
    if (n == 0)
        return "1";
  
    for (i = 1; i <= n; i++) {
        sum = sum + log(i);
    }
    cout<<sum<<endl;
  
    string result
        = to_string(exp(sum));
  
    return result;
}
  
int main()
{
    // clock_t tStart = clock();
    string str;
    str = factorial(100);
    cout << "The factorial is: "
         << str << endl;
}