#include<iostream>

using  namespace std ;
struct a{
    int a; 
    int b;
};
int main(){
   struct{
       int c;
       int d;
   }e,f,g,h;
  a name;
  name.a=1;
  e.c = 2;
  cout<<name.a<<e.c;

}