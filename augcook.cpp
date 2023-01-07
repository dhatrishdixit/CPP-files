// #include <iostream>
// using namespace std;
// void fun(int x,int y){
//   int p= abs(x-y);
//         if(p==0){cout<<0<<endl;}
//         else if(p==1){cout<<1<<endl;}
//         else if(p>1){
//             if(p%2==0){cout<<p/2<<endl;}   
//             else{cout<<p/2 + 1<<endl;}
// }
// }

// int main() {
//     int t,x,y;
//     cin>>t;
//     while(t--){
//         cin>>x>>y;
//         fun(x,y);
//     }
// 	return 0;
// }

//m2
// #include <iostream>
// using namespace std;

// int main() {
//     double t,n,x,y,a,b;
//     cin>>t;
//     while(t--){
//         cin>>n>>x>>y>>a>>b;
         
//         double g=(n/a);
//         double q=g*x;
//         double h=(n/b);
//         double p=h*y;
//         if(q>p){cout<<"diesel"<<endl;}
//         else if(p>q){cout<<"petrol"<<endl;}
//         else{cout<<"any"<<endl; }
        
//     }
// 	return 0;
// }

//q5
#include<bits/stdc++.h>
using namespace std;

void ans(int n){
  if(n==3){
            cout<<"1 2 3"<<endl; 
        }
        else{
            int v1[n];
            int q =n;
            int m=0 ;int l=n-1;
            while(m<=l){
                v1[l--]=q--;
                if(m<=l){v1[m++]=q--;}
            }
            m=0;
            while(m<n){
                cout<<v1[m++]<<" ";
            }cout<<"\n";
        }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ans(n);
    }
    return 0;
}