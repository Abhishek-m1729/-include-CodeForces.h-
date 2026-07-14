#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    int a, b;
    cin >> a >> b;
    
    int minm_day_diff_socks = min(a, b);
    int maxm = max(a, b);
    int sam_socks = (maxm - minm_day_diff_socks)/2;
    
    cout << minm_day_diff_socks << " " << sam_socks << endl;
    return 0;
}