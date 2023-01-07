#include<iostream>
using namespace std ;

void odd(int num){
    while(num!=0){
        int n = num%10;
            if(n%2 !=0){
                cout<<n<<" ";
            }else{cout<<" ";}
            num /= 10;
    }
}
int main(){
int num;
cout<<"Enter an integer: "<<endl;
cin>>num;
odd(num);

}