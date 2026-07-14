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
	    vector<int> strength(n);
	    for(auto &ele : strength) cin >> ele;
	    
	    sort(strength.begin(), strength.end());
	    
	    int AB = INT_MAX;
	    for(int i=0; i<n-1; ++i){
	        AB = min(AB, strength[i+1]-strength[i]);
	    }
	    
	    cout << AB << '
';
	}
 
    return 0;
}