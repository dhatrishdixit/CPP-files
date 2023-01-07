#include<bits/stdc++.h>
using namespace std;
//sorting vector and arrays
int main(){
    int arr[4]={5,3,4,1};
    sort(arr,arr+4);
    //for(int i=0;i<=3;i++){
    //     cout<<arr[i]<<endl;
    //}
    vector<int>v={5,4,3,2,1};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}