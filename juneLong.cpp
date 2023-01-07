#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }  
    if(n%2 !=0){
       int sum=0;
       for(int i=0;i<n;i++){
           sum +=b[i];
       }
       sum /=(n+1);
        for(int i=0;i<n;i++){
          cout<<abs(b[i]-sum);
       }
    }
    else{
         int sum=0;
       for(int i=0;i<n/2;i++){
           sum +=(10*b[i])+b[i+1];
       }
       sum /=(n+1);
        for(int i=0;i<n;i++){
          cout<<abs(b[i]-sum);
       }
    }
    
    }
}