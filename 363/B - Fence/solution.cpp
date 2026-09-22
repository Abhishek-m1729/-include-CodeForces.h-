#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll n, k;
    cin >> n >> k;
 
    vector<int> height(n);
    for(auto &ele : height) cin >> ele;
 
    ll sum = accumulate(height.begin(), height.begin() + k, 0LL);
 
    ll min_sum = sum, pos = 0;
    for(int i=k; i<n; ++i)
    {
        sum += height[i];
        sum -= height[i - k];
    
        if(sum < min_sum)
        {
            min_sum = sum;
            pos = i - k + 1;
        }
    }
    
    cout << pos + 1 << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solution();
    return 0;
}