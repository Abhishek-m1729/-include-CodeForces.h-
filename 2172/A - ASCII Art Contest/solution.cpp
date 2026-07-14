#include<iostream>
using namespace std;
int main(){
       int p, q, r;
       cin>> p>> q>> r;
 
       if(p-q>=10 || p-r>=10 || q-r>=10 || q-p>=10 || r-p>=10 || r-q>=10){
       cout<< "check again" << endl; 
       }
       else{
        if((p >= q and q >= r) || (r >= q and q >= p))
        cout<< "final" << " " << q << endl;
        else if((q >= p and p >= r) || (r >= p and p >= q))
        cout<< "final" << " " << p << endl;
        else if((p >= r and r >= q) || (q >= r and r >= p))
        cout<< "final" << " " << r << endl;
       }
    
    return 0;
}