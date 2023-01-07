#include<iostream>
using namespace std;
int ch(int a,int b){
    int sum=a;
    while(sum<=b){
         int i=1;
         if(i%2==0){
            sum+=2;
         }else{sum+=1;}
         i++;
    }
    //if(sum==b){return "yes";}
   // else{return "no";}
    return sum;
}
int main(){
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        cout<<ch(a,b)<<endl;
    }
}