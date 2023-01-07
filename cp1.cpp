#include<iostream>

using namespace std ;
int digits(int num){
  
  int l = 0;
  while(num!= 0){
      num /= 10;
    l++;
  
  }
 return l;
}
int main(){
   int num;
   cout<<"enter any integer: "<<endl;
   cin>>num;
   cout<<digits(num);
    return 0;
}