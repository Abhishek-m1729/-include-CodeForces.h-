#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        long long cont0 = 0, cont1 = 0, cont2 = 0;
        
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if(v[i] == 0) cont0 ++;
            if(v[i] == 1) cont1 ++;
            if(v[i] == 2) cont2 ++;
        }
 
        long long ans = cont0;
        long long minm = min(cont1, cont2);
        ans += minm;
        cont1 -= minm;
        cont2 -= minm;
        
        ans += cont1 / 3;
        ans += cont2 / 3;
        
        cout << ans << endl;
    }
}