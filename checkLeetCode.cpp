#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v;
    int target;
    int n;
    cin>>n>>target;
    int arr[n];
    int i=0;
    bool found = false;
    while(i<n){
    cin >> arr[i];
        i++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]+arr[j]==target){ cout<<"["<<arr[i]<<","<<arr[j]<<"]";
               found =true ;
               break;
            }
            if(found==true)
            break;
        }
    }
}