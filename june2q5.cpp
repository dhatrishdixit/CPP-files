#include <iostream>//TLE
#include <bits/stdc++.h>

using namespace std;
int main()// atm we are only checking for non sorted vectors for sorted when use another if else
{
   int t,n,x;
   vector<int>v,u,w,z;
   cin>>t;
   for(int i=1;i<=t;i++){
    cin>>n>>x;
    for(int j=0;j<n;j++){
        // cin>>v[j];
        int a;
        cin>>a;
        v.push_back(a);
    }if( is_sorted(v.begin(), v.end())==1){cout<<"yes";}
    else if( is_sorted(v.begin(), v.end())==0) {
    for(int j=0;j<n;j++){
        // u[j]=v[j];
        u.push_back(v[j]);
    }
    // cout<<u[2]<<v[2];   
    sort(u.begin(),u.end());
    for(int j=0;j<n;j++){
        w.push_back(abs(v[j]-u[j]));
    }
    int l=0;
    for(int j=0;j<n;j++){
      if(w[j]>0){z.push_back(j);}
    }
    // cout<<z[0];
    int b=0;
    int d,y;
    d= *max_element(z.begin(),z.end());
    y= *min_element(z.begin(),z.end());
    for(int i=y;i<=d;i++){
        b += v[i];
    }
    //cout<<b;
    //   if(b<=x){cout<<"yes"<<endl;}
    //   else{cout<<"no"<<endl;}

    if(b<=x){cout<<"yes";}
    else{cout<<"no";} }
    // cout<<x;
      }
}