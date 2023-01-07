#include<iostream>

using namespace std;

class myClass{
    private:
    int salary;
    public:
    void setsalary(int n){
        salary = n;
    }
    int getsalary(){
        return salary;
    }
};

int main(){
    //assigning value to the salary attribute 
    myClass Employee1;
    Employee1.setsalary(5000);
    cout<<Employee1.getsalary();
}