#include<iostream>

using namespace std;

void checkPalindrome(int n){
     int rev=0;
     int num =n;
     while(num !=0){
         rev *= 10;
         rev += num%10;
         num /= 10;
         
     }
     //cout<<rev;
     if(rev == n){
         cout<<n<<" is a Palindrome"<<endl;
     }else{cout<<n<<" is not a Palindrome"<<endl;}
}
int main(){
    checkPalindrome(121);
}