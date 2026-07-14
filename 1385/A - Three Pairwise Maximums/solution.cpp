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
	    vector<long long> xyz(3);
	    for(auto &ele : xyz) cin >> ele;
	    
	    sort(xyz.rbegin(), xyz.rend());
	    
	    if(xyz[0] == xyz[1]){
	        cout << "YES" << '
';
	        cout << xyz[0] << " " << xyz[2] << " " << xyz[2] << '
';
	    }
	    else cout << "NO" << '
';
	}
 
    return 0;
}