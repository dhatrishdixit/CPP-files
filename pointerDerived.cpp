#include <iostream>

using namespace std;
class humans{
    public:
    void introduce(){
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
    f.introduction();
    t.introduction();
    f.introduce();
}
