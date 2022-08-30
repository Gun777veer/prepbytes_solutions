#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char s[n];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    int count1=0;
    int count2=0;

    for(int i=0; i<n; i++){
        if(s[i]=='a'){
            count1++;
        }
        else{
            count2++;
        }
    }
    int count=0;

    if(count1==0 || count2==0){
        cout<<n/2<<"\n";
        if(count1==0){
            for(int i=0; i<n/2; i++){
                s[i]='a';
            }
        }
        else{
            for(int i=0; i<n/2; i++){
                s[i]='b';
            }
        }
        for(int i=0; i<n; i++){
            cout<<s[i];
        }
    }
    else{
        while(count1!=count2){
            if(count1>count2){
                count1--;
                count2++;
                for(int i=0; i<count1; i++){
                    s[i]='a';
                }
                for(int i=count1; i<n; i++){
                    s[i]='b';
                }
                count++;
            }
            else{
                count2++;
                count1--;
                for(int i=0; i<count1; i++){
                    s[i]='a';
                }
                for(int i=count1; i<n; i++){
                    s[i]='b';
                }
                count++;
            }
        }
        cout<<count<<"\n";
        for(int i=0; i<n; i++){
            cout<<s[i];
        }

    }

    return 0;

}