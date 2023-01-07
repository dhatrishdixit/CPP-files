#include<iostream>
#include<string>
#include<cmath>

using namespace std ;

int Fibonacci(int n){
    if(n<=1){
        return n;
    }else{return Fibonacci(n-2)+Fibonacci(n-1);}
}
int main(){
    cout<<Fibonacci(4);
    return 0;
}