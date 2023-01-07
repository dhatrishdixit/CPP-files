#include<iostream>
using namespace std;

int main(){
       try{
        int a=15;
        int b=0;
        if(b!=0){cout<<a/b<<endl;}
        else{throw("zero error");}
       }
       catch(const char* myNum){
        cerr<<"no"<<myNum<<endl;
       }
}