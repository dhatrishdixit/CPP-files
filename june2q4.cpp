#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        
    int maxVal=0, count=0, maxCount=0;

    for(int i=0;i<n;i++) {
        count = 0;
        for(int j=0;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxVal = arr[i];
         }
    }

   
    cout<<n-maxCount;
    }

}