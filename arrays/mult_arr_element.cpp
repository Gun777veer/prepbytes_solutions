#include <bits/stdc++.h>
using namespace std;

  int main()
  {
    //write your code here

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      int ans=1;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      for(int i=0; i<n; i++){
        ans*=arr[i];
      }
      cout<<ans<<"\n";

    }
    return 0;
  }