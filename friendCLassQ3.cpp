
//Q3
// using one friend class in different classes
#include<iostream>

using namespace std;
class A{
    int x =5;
    public:
    friend class D;
};
class B{
    int y =7;
    public:
    friend class D;
};
class C{
    int z =9;
    public:
    friend class D;
};
class D{
    public:
    void displayA(A &a){
         cout<<"value of x "<<a.x<<endl;
    }
    void displayB(B &b){
         cout<<"value of y "<<b.y<<endl;
    }
    void displayC(C &c){
         cout<<"value of x "<<c.z<<endl;
    }
    
};
int main(){
    A a;
    B b;
    C c;
    D d;
    d.displayA(a);
    d.displayB(b);
    d.displayC(c);
}