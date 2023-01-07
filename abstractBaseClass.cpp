#include<iostream>
using namespace std;

class shape{
    protected:int base , height ;
    public:
    void setbase(int b){
            base = b;
    }
    void setHeight(int h){
            height = h;
    }
    virtual int display()=0;
};
class RAT:public shape {
    public: 
    int display(){
        return 0.5*base*height;
    }
};
class rectangle:public shape {
    public: 
    int display(){
        return base*height;
    }
};
int main(){
    shape* bptr;
    
    RAT b1;
    rectangle r1;
    //RAT
    b1.setHeight(10);
    b1.setbase(5);
    bptr=&b1;
    cout<<bptr->display()<<endl;
    //rectangle 
    bptr =&r1;
    r1.setbase(10);
    r1.setHeight(10);
    cout<<bptr->display()<<endl;
}