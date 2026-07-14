#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
	while(t --){
	    int x;
	    cin >> x;
	    
	    if(x / 10 == 0) cout << x << '
';
	    else if(x / 100 == 0) cout << min(x%10, x/10) << '
';
	    else if(x / 1000 == 0) cout << min(x%10, min(x/100, (x/10)%10)) << '
';
	    else if(x == 1000) cout << 0 << '
';
	}
 
    return 0;
}