#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
 
    vector<int> p;
    stack<int> st;
 
    for(int i = 0; i < n; i++)
    {
        int doc = i + 1;
 
        if(str[i] == '1')
        {
            st.push(doc);
        }
        else if(str[i] == '2')
        {
            if(!st.empty())
            {
                p.push_back(st.top());
                st.pop();
            }
            else
            {
                p.push_back(doc);
            }
        }
        else 
        {
            p.push_back(doc);
        }
    }
 
    vector<int> vis(n + 1, 0);
    for(int x : p) vis[x] = 1;
 
    vector<int> ans;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i]) ans.push_back(i);
    }
 
    cout << ans.size() << endl;
    for(int x : ans) cout << x << " ";
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