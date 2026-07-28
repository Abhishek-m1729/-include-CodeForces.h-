#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t --)
	{
	    vector<long long> abc(3);
	    for(auto &ele : abc) cin >> ele;
	    
	    long long n;
	    cin >> n;
	    
	    sort(abc.rbegin(), abc.rend());
	    
	    int req = 2 * abc[0] - abc[2] - abc[1];
	    
	    if(n == 0) cout << "YES" << '
';
	    else if(n < req) cout << "NO" << '
';
	    else if(n == req) cout << "YES" << '
';
	    else 
	    {
	        if((n - req) % 3 == 0) cout << "YES" << '
';
	        else cout << "NO" << '
';
	    }
	}
	
	return 0;
}