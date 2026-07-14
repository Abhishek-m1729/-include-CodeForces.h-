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
	    vector<int> Ipos(n);
	    for(auto &ele : Ipos) cin >> ele;
	    
	    sort(Ipos.begin(), Ipos.end());
	    
	    int diff = Ipos[n-1] + Ipos[0];
 
        cout << Ipos[n-1] - diff / 2 << '
';
	}
 
    return 0;
}