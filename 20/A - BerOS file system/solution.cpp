#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    string s;
    cin >> s;
 
    string ans = "/";
 
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] == '/')
        {
            if(!ans.empty() && ans.back() != '/') ans += '/';
        }
        else ans += s[i];
    }
 
    if(ans.size() > 1 && ans.back() == '/') ans.pop_back();
    
    cout << ans << '
';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}