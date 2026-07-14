#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        int minm1 = min(a, min(b, c));
        int minm2 = min(max(a, b), min(max(b, c), max(a, c)));
        int maxm = max(a, max(b, c));
        
        if(minm1 + minm2 == maxm) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}