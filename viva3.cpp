#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor"<<endl;
    }
    ~A(){
        cout<<"destructor"<<endl;
    }
};
int main(){
    // A a;
    // A e;
    
    try{int c,d;
     d=0;
      int div=c/d; 
    if(d!=0){
       cout<< div;
    }
    else if(d==0){
        throw "zero error";
    }
    }
    catch(const char* msg ){
        cerr<<msg<<endl;
    }
    return 0;
}