#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n,0);
	    int s=0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        s+=arr[i];
	    }
	    s/=(n+1);
	    for(int i=0; i<n; i++){
	        cout<<arr[i]-s<<" ";
	    }cout<<endl;
	}
	return 0;
}