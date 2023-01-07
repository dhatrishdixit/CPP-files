#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,p;
    cin>>t;//sum of first and last digit should not be more than 1000 in case of 1000 it should be equal to 10 and should not be less than 0 , in between there should be no middle digit(only exception case is 10) only first and last digit and its sum should not be more than 10
    for(int i=1;i<=t;i++){
        cin>>p;  
        if(p>1000||p<0){cout<<"-1";}
        else if(p==1000&&p==10){cout<<"10";}
        else if(p==0){cout<<"0";}
        else if(p>=1 && p<=999){
            if((p%100)/10 !=0){cout<<"-1";}
            else if(((p%10)+(p/100))>10){cout<<"-1";}
            else{cout<<(p%10)+(p/100);}
        }cout<<endl;
    }
}