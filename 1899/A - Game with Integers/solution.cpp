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
	    int n;
	    cin >> n;
	    
	    if(n % 3 != 0) cout << "First" << endl;
	    else cout << "Second" << endl;
	}
    
    return 0;
}