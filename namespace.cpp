#include <iostream>
using namespace std;

class time{
    private:
    int HH , MM , SS;
    public:
     time(){
        HH=0;
        MM=0;
        SS=0;
     }
     void setTime(int i,int j,int k){
          HH=i;
          MM=k;
          SS=j;
     }
    void displayTime(){
        cout<<HH<<":"<<MM<<":"<<SS<<endl;
    }
    time operator + (time &obj){
        time temp;
        temp.HH=HH+obj.HH;
        temp.MM=(MM+obj.MM)%60+(SS/60);
        temp.SS=(SS+obj.SS)%60;
        return temp;
}
};
int main(){
    time obj1,obj2,obj3;
    obj1.setTime(2,45,38);
    obj2.setTime(3,32,33);
    obj3= obj1+obj2;
    obj3.displayTime();
}