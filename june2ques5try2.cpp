#include <iostream>//TLE
#include <bits/stdc++.h>

using namespace std;
int main()
{
   int t,n,x;
   vector<int>v;
   cin>>t;

   int l=0;
  
   for(int i=1;i<=t;i++){
    cin>>n>>x;
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int j=1;j<n;j++){
        if(v[j-1]>v[j]){
            if(v[j-1]+v[j]<=x){ l=0;}
            else{l+=1;}
            // cout<<v[j-1]+v[j];}
            cout<<l;}
        }
    
        
    // }if(l==0){cout<<"yes"<<endl;}
    //     else{cout<<"no"<<endl;}
}
}