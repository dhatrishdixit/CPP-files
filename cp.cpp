#include<bits/stdc++.h>
using namespace std;
int main(){
int T,X,Y;
cin>>T;
for(int i=1;i<=T;i++){
    cin>>X>>Y;
    if(X>0&&Y>0){
        if(X==Y){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    else{cout<<"NO"<<endl;}
}
}