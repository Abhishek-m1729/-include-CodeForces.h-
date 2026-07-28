#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t --)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    sort(s.rbegin(), s.rend());
	    
	    cout << int(s[0]) - 96 << '
';
	}
	
	return 0;
}