#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code her
  char v;
  cin>>v;

  for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
      cout<<j;
    }
    for(int k=1; k<=(10-(2)*i); k++){
      cout<<" ";
    }
    for(int l=i; l>=1; l--){
      cout<<l;
    }
    cout<<"\n";
  }

}