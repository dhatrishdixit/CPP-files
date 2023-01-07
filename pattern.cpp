#include<iostream>

using namespace std ;
int main(){
    int n =5 ;// no. of rows 
    int x,y;
    for(x=1;x<=n;x++){
        for(y=1;y<=n;y++){
            if(y<=x){
                cout<<y;
            }else{cout<<" ";}
        }
        for(y=n;y>=1;y--){
            if(y<=x){
            cout<<y;
            }else{ cout<<" ";}

        }
        cout<<endl;
    }
    return 0;
}