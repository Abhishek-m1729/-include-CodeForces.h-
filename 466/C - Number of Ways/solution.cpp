#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll n;
    cin >> n;
 
    vector<ll> arr(n);
    for(auto &ele : arr) cin >> ele;
 
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
 
    ll way = 0;
 
    if(sum % 3 != 0)
    {
        cout << 0 << endl;
        return;
    }
 
    ll current_sum = 0;
    ll countN = 0;
 
    for(ll i=0; i<n-1; ++i)
    {
        current_sum += arr[i];
        if(current_sum == 2*(sum/3)) way += countN;
        if(current_sum == sum/3) countN++;
    }
 
    cout << way << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}