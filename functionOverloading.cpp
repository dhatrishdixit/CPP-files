#include<iostream>

using namespace std;

int sum(int a,int b){
    return a + b;
}
double sum(double a,double b){
    return a + b;
}
int main(){
   int mySum1 = sum(3,5);
   double mySum2 = sum(3.5,3.6);
   cout<<mySum2<<mySum1;
}