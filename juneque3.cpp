#include<iostream>
using namespace std;
/* string ch(int a,int b){
    int sum=a;
    while(sum<=b){
         int i=1;
         if(i%2==0){
            sum+=2;
         }else{sum+=1;}
         i++;
    }
    if(sum==b){return "yes";}
    else{return "no";}
} */
int main(){
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
       // cout<<ch(a,b)<<endl;
       for(int i=1;i<=b-a;i++){
        if(i%2==0){
            a+=2;
        }else{a+=1;}
       }if(a==b){cout<<"yes"<<endl;}
       else{cout<<"no"<<endl;}
       cout<<a<<endl;
    }
}