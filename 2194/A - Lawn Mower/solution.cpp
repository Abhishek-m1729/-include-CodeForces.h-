#include<iostream>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    
    while(t>0){
        int n;
        int w;
        cin>>n>>w;
        
        
        int out = n-(n/w);
        
        cout << out << endl;
        
        t--;
    }
    return 0;
}