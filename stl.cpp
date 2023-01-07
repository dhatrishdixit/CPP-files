#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {5,3,2,1};
    sort(arr,arr+5);
    //for(int i=0;i<4;i++){
       // cout<<arr[i]<<endl; }
       
    vector<int>v = {1,5,3,2};
    sort(v.begin(),v.end());
    //for(int i=0;i<4;i++){
        //cout<<v[i]<<endl ;  }
    
     pair<int,int>p = {4,6};
     //cout<<p.first<<p.second<<endl;
     // pair vectors 
     pair<string,int>p1 = {"dhatrish",6};
    // cout<<p1.first<<p1.second<<endl;
    pair<int,string>mR[5];
    mR[0]={32,"D"};
    mR[1]={21,"X"};
    mR[2]={4,"Y"};
    mR[3]={22,"Z"};
    mR[4]={22,"A"};

    sort(mR,mR+5);
   // for(int i=0;i<=4;i++){
   //     cout<<4-i+1<<" : "<<mR[4-i].second<<endl;
   // }
    vector<pair<int,string>>w;
    w[0]={4,"A"};
    w[1]={7,"b"};
    w[2]={0,"c"};
           // check next 4 lines giving no output
    //   sort(w.begin(),w.end());
    //for(int i=0;i<3;i++){
    //    cout<<w[i].second<<endl;
    //}

    
     return 0 ;
}