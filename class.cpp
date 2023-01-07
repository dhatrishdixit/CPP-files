#include<iostream>
using namespace std;

class Cars{
   public: string brand;
    string modelName ;
    int year ;

   Cars(string x ,string y, int z){
    brand = x;
    modelName = y;
    year = z ; 
   }

};
int main(){
   Cars car1("Ford","Mustang",1999);
   cout<<car1.brand<<car1.modelName<<car1.year;

}