#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll a, b, c;
    cin >> a >> b >> c;
    
    cout << max(b-a, abs(a+c-b)) << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t --)
        solution();
        
    return 0;
}