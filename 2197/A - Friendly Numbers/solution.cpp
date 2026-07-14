#include <bits/stdc++.h>
using namespace std;
 
long long dig_sum(long long y){
    long long s = 0;
    while(y > 0){
        s += y % 10;
        y /= 10;
    }
    return s;
}
 
int main() {
    int t;
    cin >> t;
    
    while(t>0){
        long long x;
        cin >> x;
        
        int count = 0;
        
        for(int s = 1; s <= 90; s++){
            long long y = x + s;
            if(dig_sum(y) == s){
                count++;
            }
        }
        
        cout << count << endl;
        t--;
    }
    return 0;
 
}