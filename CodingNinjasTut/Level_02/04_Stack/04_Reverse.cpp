#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int y)
{
    if (s.empty())
    {
        s.push(y);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBottom(s, y);

    s.push(temp);
}

void reverse(stack<int> &s)
{
    if (s.empty())
        return;
    int y = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, y);
}

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    while (n != -1)
    {
        s.push(n);
        cin >> n;
    }

    // cout<<"Previous Status: ";
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    reverse(s);

    cout<<"current status:"<<endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}