#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cont = 1;
 
    for(int i=1; i<n; ++i)
    {
        if(s[i] != s[i-1]) cont++;
    }
 
    int ans = cont;
 
    for(int i=1; i<n-1; ++i)
    {
        int current = cont;
 
        current -= (s[i] != s[i-1]);
        current -= (s[i] != s[i+1]);
        current += (s[i-1] != s[i+1]);
 
        ans = min(ans, current);
    }
 
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t --)
        solution();
 
    return 0;
}