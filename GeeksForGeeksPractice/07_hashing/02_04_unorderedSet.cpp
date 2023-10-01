#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(15);
    s.insert(20);
    s.insert(5);
    s.insert(10);
    
    cout<<s.size()<<endl;
    auto it=s.find(15);
    s.erase(it);
    cout<<s.size()<<endl;
    s.erase(10);
    cout<<s.size()<<endl;
    s.erase(s.begin(), s.end());
        
return 0;
}
//EVERYTHING IN UNORDERED_MAP IS SIMILAR TO UNORDERED_SET