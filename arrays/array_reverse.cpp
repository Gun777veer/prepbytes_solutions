#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){

    int start=0;
    int end=n;
    int temp;

    while(end>start){
        arr[start]=temp;
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reverse(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



}