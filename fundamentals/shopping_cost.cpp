#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int N;
  cin>>N;
  while(N--){
    float price=0;
    float a,b;
    cin>>a>>b;
    
    if(a>100){
      float c=b*0.2;
      price=a*(b-c);
    }
    else{
      price=a*b;
    }
   printf("%.1f \n",price);
  }
  return 0;
}