#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	long long k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	
	int minm_cont = min({k2, k5, k6});
 
    cout << minm_cont * 256 + min(k3, k2 - minm_cont) * 32 << '
';
    return 0;
}