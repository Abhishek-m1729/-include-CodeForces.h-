#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
	ll n;
	cin >> n;
 
	vector<pair<ll, ll>> a(n);
	for(int i=0; i<n; ++i)
	{
	    ll ele;
	    cin >> ele;
	    
	    a[i] = {ele, i+1};
	}
	
	sort(a.begin(), a.end());
	
	ll count_pair = 0LL;
	for(int i=0; i<n-1; ++i)
	{
	    for(int j=i+1; j<n; ++j)
	    {
	        if(a[i].first * a[j].first < 2*n)
	        {
                if(a[i].second + a[j].second == a[i].first * a[j].first) count_pair ++;
            }
            else break;
	    }
	}
	
	cout << count_pair << endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t;
	cin >> t;
 
	while(t --) solution();
 
	return 0;
}