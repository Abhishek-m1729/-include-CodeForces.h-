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
        int n;
        cin >> n;
 
        int rem1 = 0;
        int rem0 = 0;
        int rem2 = 0;
 
        for(int i=0; i<n; ++i) {
            long long x;
            cin >> x;
 
            if(x % 2 == 1)
                ++rem1;
            else if(x % 4 == 0)
                ++rem0;
            else
                ++rem2;
        }
 
        cout << max({rem1, rem2, rem0}) << '
';
    }
 
    return 0;
}