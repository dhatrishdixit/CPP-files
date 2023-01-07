#include<iostream>

using namespace std ;
void checkArmstrongNos(int n){
    int num=n;
    int sum=0;
    while(num !=0 ){
        int r = num%10;
        sum += (r)*(r)*(r);
        num/10;
    }
    if(sum == n){cout<<n<<" is an Armstrong Number"<<endl;}
    else{cout<<n<<" is not an Armstrong Number"<<endl;}
}
int main(){

   checkArmstrongNos(370);

return 0;

}