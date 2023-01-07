#include<bits/stdc++.h>
using namespace std;

int even(int n){
    if(n==2){
        return 4;
    }
    else{
        return n*n + even(n-2);
    } }
int odd(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*n + odd(n-2);
    }
}

int main() {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin >> n;
         
    if(n%2==0){
        cout<<even(n)<<endl;
    }
    else{
        cout<<odd(n)<<endl;
    }
     }
	return 0;
}
