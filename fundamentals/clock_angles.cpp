#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    int h,m;
    int angle;
    cin>>t;
    while(t--){
      cin>>h>>m;
      int anglem=m*6;
      int angleh=(h*60+m)/2;
      angle=abs(angleh-anglem);
      angle = min(360-angle,angle);
      cout<<angle<<endl;
    }
    
    return 0;
  }
  
  
  
  