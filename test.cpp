#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
     why this soln works since the diff between two even numbers is at least 2
     and the diff between two odd number is at least 2
     and at the boundary the last even and first even is differ by more than 1 when n>=4 so
     */
    if(n==2 ||n==3){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    //step1.print even numbers
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    //step2.print odd numbers
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    return 0;
}    
