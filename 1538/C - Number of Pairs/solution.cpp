#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
ll count_pair(vector<ll> a, int n, ll parameter)
{
    ll pair = 0LL;
    int rr = n-1, ll = 0;
    while(ll <rr)
    {
        if(a[ll] + a[rr] <= parameter)
        {
            pair += (rr-ll);
            ll ++;
        }
        else rr --;
    }
    
    return pair;
}
 
void solution()
{
    int n;
    ll l, r;
    cin >> n >> l >> r;
 
    vector<ll> a(n);
    for(auto &ele : a) cin >> ele;
    
    sort(a.begin(), a.end());
 
    ll ans = count_pair(a, n, r) - count_pair(a, n, l-1);
 
    cout << ans << endl;
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
// 51