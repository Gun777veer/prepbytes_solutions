#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){

    long long n;
    cin>>n;

    long long arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    long long sum;
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

    if((j!=0 || i!=0) && i!=j){
        cout<<i<<" "<<j<<"\n";
    }
    else{
        cout<<"no answer"<<"\n";
    }

    }

}