#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	vector<long long> welfare(n);
	for(auto &ele : welfare) cin >> ele;
	
	long long maxm = *max_element(welfare.begin(), welfare.end());
	
	long long sum = accumulate(welfare.begin(), welfare.end(), 0);
	
	cout << n * maxm - sum << '
';
	
	return 0;
}