#include<bits/stdc++.h>
using namespace std;
int main(){
      // we mostly use vector whenever we want to use arrays but dynamically , as arrays size cant be changed which isn't true for vectors
  //  vector<int>v;
  //  v.push_back(10);
  //  v.push_back(20);
//cout<<v[0]<<endl;
//cout<<v.size()<<endl;
//v.push_back(0);
//cout<<v.size()<<endl;
/*for(int i=0;i<=2;i++){
  cout<<v[i]<<endl;}
  vector<int>v1(10,11);
  for(int i=0;i<=9;i++){
    cout<<v1[i]<<endl;
  }*/
  //simple sorting using vectors
  //vector<int>v2 = {1,3,4,6,7,8,9};
  //v2.push_back(2);
  vector<int>v2;
  int k;
  cout<<"enter k"<<endl;
  cin>>k;
  cout<<"enter values to be evaluated into even/odds dont enter 0"<<endl;
  for(int i=0;i<=k-1;i++){
    cin>>v2[i];
  }
  vector<int>vE;
  vector<int>vO;
  for(int i=0;i<=k;i++){
    int t = v2[i];
    if(v2%2==0){
      vE.push_back(t);
    }else if{
      vO.push_back(t);
    }
  }
}

