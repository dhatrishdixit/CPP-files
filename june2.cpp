#include<iostream>

using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(x%6==0){
            cout<<y*(x/6)<<endl;
        }else{
            cout<<y*((x/6)+1)<<endl;
        }

    }
}