#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    map <char, int> m;

    map <char, int> m1;

    bool check=true;

    int l1=s1.length(), l2=s2.length();

    if(l1!=l2){
        check=false;
    }

    for(int i=0; i<l1; i++){
        m[s1[i]]++;
    }

    for(int i=0; i<l2; i++){
        m1[s2[i]]++;
    }

    for(auto i=m.begin(); i!=m.end(); ++i){
        cout<<i->first<<" "<<i->second<<"\n";
    }

    for(auto i=m1.begin(); i!=m1.end(); ++i){
        cout<<i->first<<" "<<i->second<<"\n";
    }

    if(m==m1){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }

}