#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n, q;
    cin >> n >> q;
 
    vector<ll> a(n);
    for(auto &ele : a) cin >> ele;
 
    vector<ll> diff(n + 2, 0);
    while(q--)
    {
        int l, r;
        cin >> l >> r;
 
        diff[l]++;
        diff[r + 1]--;
    }
 
    vector<ll> freq(n);
    ll curr = 0;
    for(int i=1; i<=n; ++i)
    {
        curr += diff[i];
        freq[i-1] = curr;
    }
 
    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());
 
    ll ans = 0;
    for(int i=0; i<n; ++i) ans += a[i] * freq[i];
 
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}