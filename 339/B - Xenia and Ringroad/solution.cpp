#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n, m;
	cin >> n >> m;
	vector<long long> house(m);
	for(auto &ele : house) cin >> ele;
	
	long long time_taken = house[0] - 1;
	for(int i=1; i<m; ++i)
	{
	    if(house[i] < house[i-1]){
	        time_taken += n+house[i]-house[i-1];
	    } 
	    else if(house[i] >= house[i-1]){
	        time_taken += house[i]-house[i-1];
	    }
	}
	
	cout << time_taken << '
';
	
    return 0;
}