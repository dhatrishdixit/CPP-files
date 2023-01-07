#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,p;
    cin>>t;//sum of first and last digit should not be more than 1000 in case of 1000 it should be equal to 10 and should not be less than 0 , in between there should be no middle digit only first and last digit and its sum should not be more than 10
    for(int i=1;i<=t;i++){
        cin>>p;
        if(p==0){cout<<0;}
        else if(p==1||p==100){cout<<1;}
        else if(p==2||p==101||p==200){cout<<2;}
        else if(p==3||p==102||p==201||p==300){cout<<3;}
        else if(p==4||p==103||p==202||p==301||p==400){cout<<4;}
        else if(p==5||p==104||p==203||p==302||p==401||p==500){cout<<5;}
        else if(p==6||p==105||p==204||p==303||p==401||p==501||p==600){cout<<6;}
        else if(p==7||p==106||p==205||p==304||p==403||p==502||p==601||p==700){cout<<7;}
        else if(p==8||p==701||p==602||p==305||p==404||p==503||p==602||p==701||p==800){cout<<8;}
        // this method is also right but previous was better  

    }
}