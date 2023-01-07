#include<bits/stdc++.h>

using namespace std;
int main(){
    int t,n;
    cin>>t;
    for (int i=1;i<=t;i++)//while(t--) can also be used
    {
        cin>>n;
        vector<int>v;
        if(n%2 !=0){
             for(int j=0;j<=n/2;j++){
                v.push_back(((n/2)+1)-j);
                v.push_back(((n/2)+1)+j);
             }}
             else{
                for(int j=0;j<=n/2;j++){
                    if(j==0){
                        v.push_back(n/2);
                    }
                    if(j<n/2&&j>0){
                        v.push_back((n/2)+j);
                        v.push_back((n/2)-j);
                    }
                    if(j=n/2){
                        v.push_back((n/2)+j);    //-j will be excluded as it will only add extra zeroes
                    }
                }
             }
             reverse(v.begin(),v.end());
             //cout answer coming is correct but its not showing 
        
    }
}