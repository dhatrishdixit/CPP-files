#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s;
    ofstream myFile("file.txt");
    cout<<"Enter your name"<<endl;
    getline(cin,s);
    myFile<<s<<endl;
    cout<<"Enter your Roll no"<<endl;
    getline(cin,s);
    myFile<<s<<endl;
    cout<<"Enter your college name"<<endl;
    getline(cin,s);
    myFile<<s<<endl;
    myFile.close();
    ifstream readFile("file.txt");
    string l;
    while(getline(readFile,l))
    {
        cout<<l<<endl;
    }
    readFile.close();
    return 0;
}