#include <iostream>//TLE
#include <bits/stdc++.h>

using namespace std;
int main()
{
   int t,n,x;
   vector<int>v;
   cin>>t;

//    int l=0;
    bool l=true;
   for(int i=1;i<=t;i++){
    cin>>n>>x;
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    if( is_sorted(v.begin(), v.end())==1){cout<<"yes";}
    else if( is_sorted(v.begin(), v.end())==0){
            for(int j=0;j<n;j++){
                if(v[j]>v[j+1]){
                    if(v[j]+v[j+1]<=x){swap(v[j],v[j+1]);}
                    else{
                        l=false;
                        break;
                    }
                }
            }
            if(l==1){cout<<"yes";}
            else{cout<<"no";}

    }
    
    cout<<endl;
}
}