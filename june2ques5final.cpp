#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,x;
        cin>>n>>x;
        vector<int> varr;
        bool l = 1;
        for(int i=0; i<n; i++){
            int b;
            cin>>b;
            varr.push_back(b);
        }
        if (is_sorted(varr.begin(), varr.end())==1){
            cout<<"yes"<<endl;
        }
        else{
            for (int i = 1; i < n; i++){
                if (varr[i-1]>varr[i]){
                    if (varr[i-1]+varr[i]<=x){
                        swap(varr[i-1],varr[i]);
                    }else{
                        l=0;
                        break;
                    } 
                }
            }
            if (l==1){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }return 0;
}