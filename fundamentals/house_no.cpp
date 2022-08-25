#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
    long long n;
    cin>>n;
    int dig=1;
    for (int i = 1; i <= 9; i++)
    {
        if (n > (pow(10,i)-1))
        {
            dig++;
        }
    }
    if(n<10){
        cout<<n<<endl;
    }

    else{
            long long  x1=0;
            long long sum=0;
    for(int i=0; i<=dig; i++){
        long long x1 = (i-1)*9*(pow(10,i-2));
        sum+=x1;
    }
        //cout<<dig<<endl;
        //cout<<sum<<endl;
        long long x = n - (pow(10, (dig-1))-1);
        //cout<<x<<endl;
        long long a = (x*dig);
        //cout<<a<<endl;
        long long ans = a+sum;
        cout<<ans<<endl;
    }
    }
}
