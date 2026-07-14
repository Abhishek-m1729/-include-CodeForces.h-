#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc --)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        
        long long X_move = (x + k - 1) / k;
        long long Y_move = (y + k - 1) / k;
        
        if(X_move == Y_move) cout << Y_move * 2 << endl;
        else if(X_move > Y_move) cout << X_move * 2 - 1 << endl;
        else cout << Y_move * 2 << endl;
    }
    return 0;
}