#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long temp=n;
    int digits=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=n;
    long long sum=0;
    while(temp>0){
        int d=temp%10;
        long long p=1;
        for(int i=0;i<digits;i++) p*=d;
        sum+=p;
        temp/=10;
    }
    if(sum==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
