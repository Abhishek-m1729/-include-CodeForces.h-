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
	    int x1, y1, x2, y2, x3, y3, x4, y4;
	    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	    
	    if(x1 == x2) cout << abs((y2 - y1) * (y4 - y3)) << '
';
	    else if(x1 == x3) cout << abs((y3 - y1) * (y4 - y2)) << '
'; 
	    else if(x1 == x4) cout << abs((y4 - y1) * (y2 - y3)) << '
';
	    else if(x2 == x3) cout << abs((y2 - y3) * (y4 - y1)) << '
';
	    else if(x2 == x4) cout << abs((y2 - y4) * (y1 - y3)) << '
';
	    else if(x3 == x4) cout << abs((y3 - y4) * (y1 - y2)) << '
';
	    else cout << -1 << '
';
	}
 
    return 0;
}