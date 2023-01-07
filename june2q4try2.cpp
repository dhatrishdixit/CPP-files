#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int most_occurred_number(int arr[], int size)
{
  int max_count = 0;
//   cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (arr[i]==arr[j])
           count++;
   if (count>max_count)
      max_count = count;
  }
     return max_count;
  }

int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
 
    cout<< n - most_occurred_number(arr,n);
    // cout<<n-maxCount;
    }

}