// Q1 & Q2
 #include<iostream>
 using namespace std;
 class A{
     int x=5;
    public:
     friend class B;
 };
 class B{
      int y=7;
    public:
      void display(A &a){
         cout<<"value of x "<<a.x<<endl;
      }
      friend class C;
 };
 class C{
      int z =9;
    public:
      void display(B &b){
         cout<<"value of y "<<b.y<<endl;
      }
      friend class D;
 };
 class D{
    public:
     void display(C &c){
         cout<<"value of z "<<c.z<<endl;
     }
 };

 int main(){
     A a;
     B b;
     C c;
     D d;
     b.display(a);
     c.display(b);
     d.display(c);
     
 }
