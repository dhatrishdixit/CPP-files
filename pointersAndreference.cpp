#include<iostream>
using namespace std;

int main(){
    int a =15;
    int &b = a;
    int* c = &a;
    cout<<a<<endl<<b<<endl<<&b<<endl<<c<<endl<<&c<<endl<<*c;
}