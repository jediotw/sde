#include<bits/stdc++.h>
using namespace std;
void printName(int n){
    if(n==0) return;
    cout<<"saurabh\n";
    printName(n-1);
}
int main(){
    printName(5);
    return 0;
}