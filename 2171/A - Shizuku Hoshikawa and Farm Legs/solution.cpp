#include<iostream>
using namespace std;
 
int psbl(int n, int c){
    if(n==0 || n==1) return c+1;
    return psbl(n-2, c+1);
}
 
int main(){
    int t;  // number of test cases
    cin>>t;
    while (t--) {
       int n;
       cin>> n;
 
       if(n%2!=0) cout<< "0" << endl;
       else cout<< psbl(n/2, 0) << endl;
    }
    return 0;
}