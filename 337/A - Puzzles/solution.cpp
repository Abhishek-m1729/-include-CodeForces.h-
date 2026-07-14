#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n, m;
	cin >> n >> m;
	vector<int> quantities(m);
	for(auto &ele : quantities) cin >> ele;
	
	sort(quantities.begin(), quantities.end());
	
	int diff = INT_MAX;
	for(int i = 0; i + n - 1 < m; ++i)
	{
	    diff = min(diff, quantities[i + n - 1] - quantities[i]);
	}
    
    cout << diff << endl;
    return 0;
}