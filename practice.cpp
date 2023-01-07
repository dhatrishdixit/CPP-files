#include<iostream>

using namespace std ;

int main(){
   int n ;
   cin>>n;
   int x=1,y=1;
   for(y=1;y<=n;y++){
       for(x=1;x<=n;x++){
         if(y==1 || y==n){
             cout<<"*";
         }else{
            if(x==1 || x==n){
                cout<<"*";
            }else{cout<<" ";}
         }  
       }cout<<endl;
   }
   return 0;
}
