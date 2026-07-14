#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    int no_front_part = 0;
	    if(b > a) no_front_part ++;
	    if(c > a) no_front_part ++;
	    if(d > a) no_front_part ++;
	    
	    cout << no_front_part << endl;
	}
 
}