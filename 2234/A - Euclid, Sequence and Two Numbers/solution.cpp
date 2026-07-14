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
	    int n;
	    cin >> n;
	    vector<int> Bn(n);
	    for(auto &ele : Bn) cin >> ele;
	    
        sort(Bn.rbegin(), Bn.rend());
	    
	    bool found = true;
	    for(int i=2; i<n; ++i)
	    {
	        if(Bn[i] != Bn[i-2] % Bn[i-1]){
	            found = false;
	            break;
	        }
	    }
	    
	    if(found) cout << Bn[0] << " " << Bn[1] << '
';
	    else cout << -1 << '
';
	}
 
    return 0;
}