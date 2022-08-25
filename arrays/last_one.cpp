#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //her
    
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      int arr[n];
      
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      
      int ans=-1;
      
      for(int i=0; i<n; i++){
        if(arr[i]==1){
          ans=i;
        }
      }
      
      cout<<ans<<"\n";
    }
    
    return 0;
  }