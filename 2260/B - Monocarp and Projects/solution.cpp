#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
 
        long long d = y - x;
        long long ans = 0;
 
        long long end = min(k, max(0LL, d - x + 1));
 
        for(long long i = 0; i < end; )
        {
            long long div = x + i;
            long long q = d / div;
 
            long long j;
 
            if(q == 0)
                j = end;
            else
                j = min(end, d / q - x + 1);
 
            long long cnt = j - i;
            long long sum = (x + i + x + j - 1) * cnt / 2;
 
            ans += d * cnt - q * sum;
 
            i = j;
        }
 
        if(k > end)
            ans += (k - end) * d;
 
        cout << ans << '
';
    }
 
    return 0;
}