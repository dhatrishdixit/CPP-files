#include<bits/stdc++.h>

using namespace std;
pair<int,int> f(){
    return{3,4};
}

int main(){
    // vector array and sorting function already done  
    
    //ordered sets are just like vectors(check) but already sorted
    //pair
    pair<string,int> p={"dhatrish",29};
    // cout<<p.first<<" "<<p.second ;

    //sorting of arrays/vector of pairs
    //first value is sorted first than 2nd value is checked if 1st value is same 
    //pair<int,int> p[5]=
    vector<pair<int,string>>v;
    int n;
    // cin>>n;
    //o(n^2 complexity)
    //check this 
    // for(int i=0;i<n;i++){
    //     int k;
    //     string s;
    //     cin>>k>>s;
    //    for(int i=0;i<n;i++){
    //     cin>>k;
    //     v.push_back({k,0});
    //    }
    //    for(int i=0;i<n;i++){
    //     cin>>s;
    //     v.push_back({v[i].first,s});
    //    }
    //    }
    //   cout<<v[2].first<<" "<<v[2].second;

    //* directly taking inputs*
    // int num;
    // string s;
    // cin >>num>>s;
    // v.push_back({num,s});
    // cout<<v[0].first<<" "<<v[0].second;
    // cin >>num>>s;
    // v.push_back({num,s});
    // cout<<v[1].first<<" "<<v[1].second;

    //iterators

    
    vector<int> v1={10,15,5,20};
    // long form- vector<int>::iterator it = v1.begin();
    //short form -
    auto it = v.begin();
 cout<<&it;


 //set 
 //set is a container which keeps a unique copy of every element in sorted order 
    return 0;
}