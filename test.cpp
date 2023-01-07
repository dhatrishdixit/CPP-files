#include<iostream>

using namespace std ;
class circle{
    public: 
    int radius;
    double area(){
        return 2*(3.14)*radius;
    }
};
int main(){
    circle c1;
    c1.radius=1;
    cout<<c1.area()<<endl;
    int n=2.5;
    cout<<n;

}