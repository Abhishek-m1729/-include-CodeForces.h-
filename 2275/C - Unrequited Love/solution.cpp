#include <bits/stdc++.h>
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    vector<long long> sum(n - 4);
    for (int i = 0; i < n - 4; i++)
        sum[i] = a[i] + a[i + 2] - a[i + 4];
 
    unordered_map<long long, long long> mpp;
    long long ans = 0;
    for (int i = 0; i < n - 4; i++)
    {
        ans += mpp[sum[i]];
        if (i >= 2 && sum[i - 2] == sum[i])
            ans--;
        if (i >= 4 && sum[i - 4] == sum[i])
            ans--;
        mpp[sum[i]]++;
    }
 
    cout << ans << '
';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}