#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t,q,w;
	cin>>t;
	while(t--)
	{
	    int x,k=0;
	    cin>>x;
	    int n=100000;
	    int ar2[n];
	    ar2[0]=5;
	    for(q=1;q+1<n;q++)
	     {ar2[q]=ar2[q-1]+3;}
	     
	    for(q=0,w=3;q<n && x-ar2[q]>=0;q++,w++)
	    {
	        if((x-ar2[q])%w==0)
	        {
	            k=1;
	            break;
	        }
	    }
	    if(k==1)
	     cout<<"yes"<<endl;
	    else
	     cout<<"no"<<endl;
	}
	return 0;
}