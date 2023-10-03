#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Pair
{
    T x;
    T y;
    public:
    void setX(T x){
        this->x = x;
    }


    T getX(){
        return x;
    }

    void setY(T y){
        this->y = y;
    }

    T getY(){
        return y;
    }
};

int main()
{
    Pair<int> p1;
    p1.setX(10);
    p1.setY(12);

    cout<<p1.getX()<<" "<<p1.getY()<<endl;
return 0;
}