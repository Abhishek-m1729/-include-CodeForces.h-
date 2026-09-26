#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> price(n);
    for(auto &ele : price) cin >> ele;
    
    sort(price.begin(), price.end());
    
    int ans = 0;
    for(int i=0; i<m; ++i) 
    {
        if(price[i] > 0) break;
        ans += abs(price[i]);
    }
    
    cout << abs(ans) << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solution();
 
    return 0;
}