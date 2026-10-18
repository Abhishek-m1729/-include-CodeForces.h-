#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    vector<int> b(n);
    for(int &ele : b) cin >> ele;
 
    unordered_map<int,int> freq;
    for(int ele : b) freq[ele]++;
 
    for(auto &[ele, c] : freq)
    {
        if(c % ele)
        {
            cout << -1 << endl;
            return;
        }
    }
 
    vector<int> a(n);
    unordered_map<int, vector<int>> pos;
 
    for(int i=0; i<n; ++i) pos[b[i]].push_back(i);
 
    int curr = 1;
    for(auto &[f, v] : pos)
    {
        for(int i=0; i<(int)v.size(); i += f)
        {
            for(int j=i; j<i+f; ++j) a[v[j]] = curr;
 
            curr++;
        }
    }
 
    for(int ele : a) cout << ele << ' ';
    cout << endl;
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