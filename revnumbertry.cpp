#include<iostream>
using namespace std;
int rev(int n){
    int rev1=0;
    while(n!=0){
        rev1 *=10;
        rev1 += n%10;
        n /= 10;
    }
    return rev1;
}
int main(){
    cout<<rev(145);
}