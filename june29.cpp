#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t,s,x,y,z;
    cin>>t;
    while(t--){
       cin>>s>>x>>y>>z;
       if(z<=s-x-y){
        cout<<0<<endl;
       }
       else if(z>s-x-y){
           int a = s-min(x,y);
           if(a>=z){cout<<1<<endl;}
          // if(z<=s-x || z<=s-y){cout<<1<<endl;}
            else if(z>=x+y){cout<<2<<endl;}
           else{cout<<1<<endl;}
        
       }
     
    }
}
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int t,s,x,y,z;
//     cin>>t;
//     while(t--){
//        cin>>s>>x>>y>>z;
//        if(z<=s-x-y){
//         cout<<0<<endl;
//        }
//        else{
//            int a = s-min(x,y);
//            if(a>=z){cout<<1<<endl;}
//           // if(z<=s-x || z<=s-y){cout<<1<<endl;}
//             else if(z>=x+y){cout<<2<<endl;}
//            else{cout<<1<<endl;}
        
//        }
     
//     }
// }