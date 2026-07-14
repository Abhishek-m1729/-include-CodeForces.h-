#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tc;
	cin >> tc;
	while(tc --)
	{
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int sum = a + b + c;
	    int minm = min(a, min(b, c));
	    
	    if(sum - minm >= 10) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
    return 0;
}