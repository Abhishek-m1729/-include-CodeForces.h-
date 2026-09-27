#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll n,k;
    cin >> n >> k;
    ll total = 0LL;
    
    vector<ll> a(n+1);
    for(int i=1; i<n+1; ++i) 
    {
        cin >> a[i];
        total += a[i];
    }
    
    ll ans=0;
    
    if(k == 1) ans = total;
    else if(n >= 2*k-1)
    {
        for(int i=k; i<=n-k+1; ++i) ans += a[i]; 
        for(int i=1; i<k; ++i) ans += max(a[k-i], a[n-k+1+i]);
    }
    else
    {
        int req = n-k+1;
        for(int i=0; i<req; ++i) ans+=max(a[k+i], a[n-k+1-i]);
    }
    
    cout<<ans<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solution();
    
    return 0;
}