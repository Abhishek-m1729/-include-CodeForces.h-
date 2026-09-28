#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll n;
    cin >> n;
    
    ll fac = n;
    for(ll i=2; i*i<=n; ++i)
    {
        if(n % i == 0)
        {
            fac = i;
            break;
        }
    }
    
    if(fac == n) cout << 1 << " " << n-1 << endl;
    else 
    {
        ll ans = n/fac;
        cout << ans << " " << n-ans << endl;
    }
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