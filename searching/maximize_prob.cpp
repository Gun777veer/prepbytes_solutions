#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    
    int n,k;
    cin>>n>>k;
    
    int ans=1;
    int i=1;
    int count=1;
    
    while(ans<=(240-k)){
      ans=i*5;
      i++;
      count++;
    }
    
    cout<<count<<"\n";

    
    return 0;
  }