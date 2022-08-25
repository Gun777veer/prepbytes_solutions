#include<bits/stdc++.h>
using namespace std;
int main(){
int T;
cin>>T;
while(T--){
long long N;
cin>>N;
while(N>1){
cout<<N<<" ";
if(N%2==0){
N=sqrt(N);
}
else{
N=sqrt(N)*sqrt(N)*sqrt(N);
}
}
if(N==1){
  cout<<1<<endl;
}
else{
  cout<<endl;
}
}
}
