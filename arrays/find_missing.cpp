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

  int arr[n-1];
  int arr1[n];

  for(int i=0; i<n-1; i++){
    cin>>arr[i];
  }

  sort(arr,arr+(n-1));

  for(int i=0; i<n; i++){
    arr1[i]=i;
  }

  int ans=0;

  for(int i=1; i<=n; i++){
    //cout<<arr[i-1]<<" "<<i<<"\n";
    if(arr[i-1]!=i){
        cout<<i<<"\n";
        break;
    }
  }

  }


  return 0;
}