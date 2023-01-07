// //Q1 & Q2
// #include<iostream>
// using namespace std;
// class A{
//     int x=5;
//    public:
//     friend class B;
// };
// class B{
//      int y=7;
//    public:
//      void display(A &a){
//         cout<<"value of x "<<a.x<<endl;
//      }
//      friend class C;
// };
// class C{
//      int z =9;
//    public:
//      void display(B &b){
//         cout<<"value of y "<<b.y<<endl;
//      }
//      friend class D;
// };
// class D{
//    public:
//     void display(C &c){
//         cout<<"value of z "<<c.z<<endl;
//     }
// };

// int main(){
//     A a;
//     B b;
//     C c;
//     D d;
//     b.display(a);
//     c.display(b);
//     d.display(c);
//     //<<endl<<c.display(b)<<endl<<d.display(c);
// }

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
    int z =7;
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