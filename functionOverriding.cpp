// this process is known as function overriding in cpp as only derived class function will give output in derived object
#include <iostream>

using namespace std;
class humans{
    public:
    //virtual or not plays a bug difference
    //virtual
     void introduction(){
        cout << "I breathe "<<endl;
        cout <<"I eat and drink"<<endl;

    }
};
class footballer:public humans{
     public:
     void introduction(){
        cout <<"I play football"<<endl;
     }
};
class teacher:public humans{
     public:
     void introduction(){
        cout <<"I teach students"<<endl;
     }
};
int main(){
    teacher t;
    footballer f;
    // f.introduction();
    // t.introduction();
    // f.humans::introduction();
    // teacher *ptr;
    // humans h;
    //  ptr = &h;
    humans* ptr;
    teacher t1;
    ptr = &t1;
    ptr->introduction();



}
