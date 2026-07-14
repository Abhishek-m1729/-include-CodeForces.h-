#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	long long n;
	cin >> n;
	vector<long long> Bottle_Price(n);
	for(auto &ele : Bottle_Price) cin >> ele;
	sort(Bottle_Price.begin(), Bottle_Price.end());
	
	long long q;
	cin >> q;
	while(q --)
	{
	    long long m;
	    cin >> m;
	    
	    long long Can_buy = upper_bound(Bottle_Price.begin(), Bottle_Price.end(), m) - Bottle_Price.begin();
	    
	    cout << Can_buy << endl;
	}
    return 0;
}