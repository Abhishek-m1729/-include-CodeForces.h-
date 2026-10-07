#include <bits/stdc++.h>
using ll = long long;
using namespace std;
 
ll solution()
{
    int n;
    cin >> n;
 
    vector<ll> d(n);
    for(auto &ele : d) cin >> ele;
 
    sort(d.begin(), d.end());
 
    ll gd = d[0]*d[n-1];
 
    int it = 0;
    for(ll i=2; i<=gd/2 && it<n; ++i)
    {
        if(gd % i == 0)
        {
            if(it >= n || d[it] != i) return -1;
            it ++;
        }
    }
 
    if(it != n) return -1;
 
    return gd;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) cout << solution() << endl;
 
    return 0;
}