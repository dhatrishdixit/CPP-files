#include<iostream>

using namespace std;
int check(int a,int b){
    while(a<=b){
        int i=1;
        if(i%2==0){
            a+=2;
        }else{a+=1;}
        i+=1;
    }return a;
}

int main(){
 int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        cout<<check(a,b)<<endl;
    }

}