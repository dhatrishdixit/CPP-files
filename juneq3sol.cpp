#include<iostream>

using namespace std ;
string ch(int a ,int b){
    if ((b-a)%3==2){return "no";}
    else{return "yes";}
}
int main(){
     int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        cout<<ch(a,b)<<endl;
    }