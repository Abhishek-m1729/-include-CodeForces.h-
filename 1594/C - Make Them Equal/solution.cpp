#include <bits/stdc++.h>
using namespace std;
 
void solution() {
    int n;
    char c;
    cin >> n >> c;
 
    string s;
    cin >> s;
 
    bool ok = true;
    for(char ch : s)
    {
        if(ch != c)
        {
            ok = false;
            break;
        }
    }
 
    if(ok) 
    {
        cout << 0 << endl;
        return;
    }
 
    for(int x=1; x<=n; ++x)
    {
        bool good = true;
        for(int j=x; j<=n; j += x) 
        {
            if(s[j - 1] != c) 
            {
                good = false;
                break;
            }
        }
 
        if(good) 
        {
            cout << 1 << endl;
            cout << x << endl;
            return;
        }
    }
 
    cout << 2 << endl;
    cout << n << ' ' << n - 1 << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solution();
}