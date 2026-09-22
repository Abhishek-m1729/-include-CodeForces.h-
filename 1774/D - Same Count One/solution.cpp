#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n, m;
    cin >> n >> m;
    int rows = n;
 
    vector<int> counter(n);
    vector<vector<int>> zero(n);
 
    int k = 0;
    while(n--)
    {
        int count1 = 0;
        for(int i=0; i<m; ++i)
        {
            int ele;
            cin >> ele;
            zero[k].push_back(ele);
 
            if(ele == 1) count1++;
        }
        counter[k] = count1;
        k++;
    }
 
    int total1 = accumulate(counter.begin(), counter.end(), 0);
 
    if(total1 % rows != 0)
    {
        cout << -1 << endl;
        return;
    }
 
    int fac = total1/rows;
 
    vector<int> greater(rows);
    vector<int> lower(rows);
 
    for(int i=0; i<rows; ++i)
    {
        if(counter[i] > fac) greater[i] = counter[i] - fac;
        else lower[i] = fac - counter[i];
    }
 
    vector<tuple<int, int, int>> ans;
    for(int k=0; k<m; ++k)
    {
        vector<int> a, b;
        for(int i=0; i<rows; ++i)
        {
            if(greater[i] > 0 && zero[i][k] == 1) a.push_back(i);
 
            if(lower[i] > 0 && zero[i][k] == 0) b.push_back(i);
        }
 
        int x = min(a.size(), b.size());
 
        for(int i=0; i<x; ++i)
        {
            int u = a[i];
            int v = b[i];
            ans.push_back({u + 1, v + 1, k + 1});
            greater[u]--;
            lower[v]--;
        }
    }
 
    for(int i=0; i<rows; ++i)
    {
        if(greater[i] != 0 || lower[i] != 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ans.size() << endl;
 
    for(auto [x, y, k] : ans) cout << x << " " << y << " " << k << endl;
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