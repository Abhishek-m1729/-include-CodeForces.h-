#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
bool isSorted(vector<ll> a, int n)
{
    for(ll i=1; i<n; ++i)
    {
        if(a[i] < a[i-1]) return false;
    }
 
    return true;
}
 
void solution()
{
    ll n;
    cin >> n;
 
    vector<ll> a(n);
    for(auto &ele : a) cin >> ele;
 
    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }
   
    if(!isSorted(a, n))
    {
        cout << 0 << endl;
        return;
    }
 
    ll ans = LLONG_MAX;
 
    for(ll i=1; i<n; ++i)
    {
        ans = min(ans, abs(a[i] - a[i-1]));
    }
 
    cout << ans/2 + 1 << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t --) solution();
 
    return 0;
}