#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int l, r;
    cin >> l >> r;
 
    int n = r-l+1;
    
    if(abs(l) == abs(r)) cout << 0 << endl;
    else if((l > 0 && r < 0) || (l < 0 && r > 0)) cout << max(abs(l), abs(r))-min(abs(l), abs(r))-1 << endl;
    else if(l == 0 || r == 0) cout << n-2 << endl;
    else cout << n-1 << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while(t --) solution();
 
    return 0;
}