#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    
	int k, r;
    cin >> k >> r;
    
    int ld = k % 10;
    
    if(ld == 5)
    {
        if(ld == r) cout << 1 << endl;
        else cout << 2 << endl;
    }
    else if(ld == 0) cout << 1 << endl;
    else
    {
        bool found = false;
        if(ld == r) cout << 1 << endl;
        else{
            for(int i=2; i<=9; ++i){
                if((i * ld) % 10 == r){
                    cout << i <<endl;
                    found = true;
                    break;
                } 
            }
            if(!found){
                for(int i=2; i<=9; ++i){
                    if((i * ld) % 10 == 0){
                        cout << i <<endl;
                    } 
                }
            }
        }
    }
    
    return 0;
}