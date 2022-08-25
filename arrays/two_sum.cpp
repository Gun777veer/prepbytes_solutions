#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int sum;
    cin>>sum;

    int i=0, j=n-1, a1=0, a2=0;


    while(i<j){
        if((arr[i]+arr[j])==sum){
            a1=i;
            a2=j;
            break;
        }
        else if((arr[i]+arr[j])<sum){
            i++;
        }
        else{
            j--;
        }
    }

    if(j!=0 || i!=0){
        cout<<i<<" "<<j<<"\n";
    }
    else{
        cout<<"no"<<"\n";
    }

    }
  //  int n;
  //     cin>>n;

  //     char s[n];
      
  //     for(int i=0; i<n; i++){
  //       cin>>s[i];
  //     }
      
  //     string s1;
      
  //     for(int i=n-1; i>=0; i--){
  //       s1+=s[i];
  //     }
      
  //     int check = 0,c=0;
      
  //     for(int i=0; i<n; i++){
  //         if(s[i]==s1[i]){
  //           check=1;
  //         }
  //     }

  //     cout<<check;


}

