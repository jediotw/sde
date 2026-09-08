#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long temp=n;
    long long rev=0;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
