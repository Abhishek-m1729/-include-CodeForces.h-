#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) 
    {
        int n, k;
        cin >> n >> k;
 
        string str;
        cin >> str;
 
        int ans = 0;
 
        for(int i=0; i<n; i+=k) 
        {
            bool all1 = true;
            for(int j=i; j<i+k; ++j) 
            {
                if(str[j] == '0') {
                    all1 = false;
                    break;
                }
            }
 
            if(all1) ans++;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}