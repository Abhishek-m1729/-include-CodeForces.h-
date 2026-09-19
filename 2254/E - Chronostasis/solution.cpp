#include <bits/stdc++.h>
#define endl '
'
#define pb push_back
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    vector<ll> b(n);
    ll total = 0;
 
    for(auto &ele : b)
    {
        cin >> ele;
        total += ele;
    }
 
    if(total <= 0)
    {
        cout << -1 << endl;
        return;
    }
 
    multiset<ll> s(b.begin(), b.end());
 
    vector<ll> a;
    ll a_next = 0LL;
 
    for(int i=0; i<n; ++i)
    {
        auto it = s.lower_bound(1 - a_next);
 
        if(it == s.end())
        {
            cout << -1 << endl;
            return;
        }
 
        a_next += *it;
        a.pb(a_next);
 
        s.erase(it);
    }
 
    for(auto &ele : a) cout << ele << " ";
    cout << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--)
        solution();
 
    return 0;
}