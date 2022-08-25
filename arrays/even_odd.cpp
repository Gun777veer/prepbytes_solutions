#include <bits/stdc++.h>
using namespace std;

  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

    int count=0;
    int j=0;

    for(int i=0; i<n; i++){
      if(arr[i]%2==0){
        cout<<arr[i]<<" ";
      }
      else{
        arr1[j]=arr[i];
        count++;
        j++;
      }
    }

    cout<<endl;

    for(int i=0; i<count; i++){
      cout<<arr1[i]<<" ";
    }

    return 0;
  }