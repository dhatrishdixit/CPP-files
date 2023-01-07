#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    //vector<char>v;
    string v;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        cin>>s;
        for(int j=0;j<n;j++){
             if(s[j]=='A'){//v[j]='T';
             cout<<"T";}
             else if(s[j]=='T'){//v[j]='A';
             cout<<"A";}
             else if(s[j]=='C'){//v[j]='G';
             cout<<"G";}
             else if(s[j]=='G'){//v[j]='C';
             cout<<"C";}
        }cout<<endl;
        //cout<<v<<endl;


    }
}