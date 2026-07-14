#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int tc;
	cin >> tc;
	while(tc--)
	{
	    long long n;
	    cin >> n;
	    
	    if(n % 2 != 0) cout << n / 2 << endl;
	    else cout << (n / 2) - 1 << endl;
	}
    return 0;
}