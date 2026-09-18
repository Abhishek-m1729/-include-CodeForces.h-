#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t --)
    {
        long long n, k;
        cin >> n >> k;
        
        long long ans = 0;
        
        int rem = k % (n-1);
        if(rem == 0)
        {
            long long fac = k / (n-1);
            ans = (n-1) + (fac-1)*n;
        }
        else
        {
            long long fac = k / (n-1);
            ans = (n-1) + (fac-1)*n + rem + 1; 
        }
        
        cout << ans << '
';
    }
	
    return 0;
}