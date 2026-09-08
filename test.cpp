#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int large = INT_MIN, second = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>large){
            second = large;
            large = a[i];
        }else if(a[i]>second && a[i]!=large){
            second = a[i];
        }
    }
    if(second==INT_MIN){
        cout<<"NO SECOND LARGEST\n";
    }else{
        cout<<second<<"\n";
    }
    return 0;
}