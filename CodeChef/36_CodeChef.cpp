#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c >= 65 && c <= 90)
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout << "Vowel" << endl;
        }
        else
        {
            cout << "Consonent" << endl;
        }
    }
    return 0;
}