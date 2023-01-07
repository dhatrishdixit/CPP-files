#include<iostream>

using namespace std;

int main (){
    int n=4;
    int x,y;
    for(y=1;y<=2*n;y++){      
        for(x=1;x<=2*n;x++){ if(y<=n){
            if(x<=y){cout<<"*";}
            else{cout<<" ";}}
            else{
                if(x>=y){cout<<"*";}
                else{cout<<" ";}
            }
        }cout<<endl;
        
    }

}