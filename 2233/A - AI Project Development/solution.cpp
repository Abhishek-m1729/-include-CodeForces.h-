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
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
 
        long long ai_ = (n + (x + y) - 1) / (x + y);
 
        long long ai;
        if(n <= x * z) 
        {
            ai = (n + x - 1) / x;
        } 
        else 
        {
            long long rem = n - x * z;
            ai = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
        }
 
        cout << min(ai_, ai) << '
';
    }
 
    return 0;
}