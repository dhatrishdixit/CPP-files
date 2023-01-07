#include<iostream>
using namespace std;
 
class journey{
     private:
     int km,m;
     public:
    //  journey(int a,int b){
    //     km=a;
    //     m=b;
    //     dont use parameterized constructor }
    void setValue(int a,int b){
        km=a;
        m=b;
    }
     journey operator +(journey &obj){
        journey ref;  
        ref.m =(obj.m+m);
        int k = (ref.m)/1000;
        ref.km=obj.km+km+k;
        ref.m =(obj.m+m)%1000;
        return ref;
     }

     void display(){
        cout<<km<<"kilometers "<<m<<" meters";
     }
     
};
int main(){
    journey car,bus,train,totalDist;
    car.setValue(5,400);
    bus.setValue(6,500);
    train.setValue(7,700);
    totalDist = car + bus + train ;
    totalDist.display();
    return 0;
}