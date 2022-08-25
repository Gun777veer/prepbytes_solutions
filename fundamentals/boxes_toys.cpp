#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n; 
  cin>>n;
  int count=0;
  int t,c;
  for(int i=0; i<n; i++){
    cin>>t>>c;
    if((c-t)>=2){
      count++;
    }
  }
  cout<<count;
  return 0;
}