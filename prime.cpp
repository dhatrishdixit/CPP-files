#include<iostream>

using namespace std;
string prime(int a){
    int l=0;
   for(int i=2;i<=a-1;i++){
    if(a%i !=0){
        l++;
    }
   }if(l==a-2){
    return " prime number" ;
   }
}
int main(){
    int a =5;
    cout<<a<<prime(a)<<endl;
}