#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
	while(t --)
	{
	    long long n, k;
	    cin >> n >> k;
	    
	    if(n == k) cout << 1 << '
';
	    else if(n > k)
	    {
	        if(n % k == 0) cout << 1 << '
';
	        else cout << 2 << '
';
	    }
	    else
	    {
	        if(k % n == 0) cout << k / n << '
';
	        else cout << k / n + 1 << '
';
	    }
	   
	}
 
    return 0;
}