#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin>>t;

  while(t--){

  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int max=0;
  int index=0;

  for(int i=0; i<n; i++){
    if(arr[i]>max){
        max=arr[i];
        index=i;
    }
  }
  
  int arr1[n-index];
    for(int j=index; j<n; j++){
        arr1[j]=arr[j];
    }
    for(int j=n-1; j>=index; j--){
        cout<<arr1[j]<<" ";
    }
    cout<<"\n";

  }

  return 0;
}