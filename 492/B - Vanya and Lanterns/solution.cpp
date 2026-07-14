#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	long long l;
	cin >> n >> l;
	
	vector<long long> coorinates(n);
	for(auto &ele : coorinates) cin >> ele;
	
	sort(coorinates.begin(), coorinates.end());
	
	long long max_distance = 0;
	for(int i=0; i<n-1; ++i)
	{
	    max_distance = max(max_distance, coorinates[i+1] - coorinates[i]);
	}
 
    if(n==1 && coorinates[0]==0) cout << l << ".0000000000" << '
';
    else if(coorinates[0] == 0 && coorinates[n-1] == l)
        cout << fixed << setprecision(10) << double(max_distance) / 2<< '
';
    else
        cout << fixed << setprecision(10) << max(double(max(coorinates[0], l-coorinates[n-1])), double(max_distance) / 2) << '
';
        
    return 0;
}