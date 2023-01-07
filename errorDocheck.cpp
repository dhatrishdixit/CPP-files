// // defining the constructor within the class 

// #include <iostream> 
// using namespace std; 

// class student { 
// 	int rno; 
// 	char name[10]; 
// 	double fee; 

// public: 
// 	student() 
// 	{ 
// 		cout << "Enter the RollNo:"; 
// 		cin >> rno; 
// 		cout << "Enter the Name:"; 
// 		cin >> name; 
// 		cout << "Enter the Fee:"; 
// 		cin >> fee; 
// 	} 

// 	void display() 
// 	{ 
// 		cout << endl << rno << "\t" << name << "\t" << fee; 
// 	} 
// }; 

// int main() 
// { 
// 	student s; // constructor gets called automatically when 
// 			// we create the object of the class 
// 	s.display(); 

// 	return 0; 
// }
//
#include<iostream>
using namespace std;

class shape{
    protected:int base , height ;
    public:
    shape(int  b ,int h){
        base = b;
        height= h;
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
    b1(3,5);
    rectangle r1;




}