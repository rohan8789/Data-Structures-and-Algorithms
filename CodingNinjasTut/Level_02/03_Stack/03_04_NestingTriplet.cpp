#include<bits/stdc++.h>
using namespace std;

template<typename T, typename V>
class Pair
{
    T x;
    V y;
    public:
    void setX(T x)
    {
        this->x=x;
    }
    T getX()
    {
        return x;
    }
    void setY(V y)
    {
        this->y=y;
    }
    V getY()
    {
        return y;
    }
};

int main()
{
    Pair<int, Pair<double, char>> p2;
    p2.setX(10);
    Pair<double, char> p4;
    p4.setX(12.45);
    p4.setY('a');

    p2.setY(p4);

    cout<<p2.getX()<<" "<<p2.getY().getX()<<" "<<p2.getY().getY()<<endl;
return 0;
}