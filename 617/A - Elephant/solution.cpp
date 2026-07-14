#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int minstp = 0;
 
    
   while(n != 0){
    if(n >= 5){
        n-= 5;
        minstp++;
    }
    else if(n >= 1){
        minstp++;
        n = 0;
    } 
   }
        
    
 
    cout << minstp << endl;
    return 0;
}