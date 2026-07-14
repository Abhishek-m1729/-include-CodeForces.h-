#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b;
    char colon;
    cin >> a >> colon >> b;
    string period = (a < 12) ? " AM
" : " PM
";
    
    int hh_12 = (a == 0 || a == 12) ? 12 : a % 12;
    
    if(hh_12 < 10) cout << '0';
    cout << hh_12 << ':';
    
    if(b < 10) cout << '0';
    cout << b << period;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}