#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	int n;
	cin >> n;
	
	bool found = false;
	while(n --)
	{
	    int a, b;
	    cin >> a >> b;
	    
	    if(a < b) found = true;
	}
 
    if(found) cout << "Happy Alex" << '
';
    else cout << "Poor Alex" << '
';
    
    return 0;
}