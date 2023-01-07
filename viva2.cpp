#include<iostream>
using namespace std;

namespace first_space{
    void func(){
        cout<<"first"<<endl;
    }
}

namespace second_space{
    void func(){
        cout<<"second"<<endl;
    }
}
using namespace second_space;
int main(){
    first_space::func();
    func();
}