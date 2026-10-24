#include <bits/stdc++.h>
#define endl '
'
// #define yes cout << "YES
" 
// #define no cout << "NO
"
// using ll = long long;
using namespace std;
 
void solution()
{
	int n;
	cin >> n;
 
	vector<int> a(n-1);
	for(auto &ele : a) cin >> ele;
 
	int sum = accumulate(a.begin(), a.end(), 0);
	
	cout << -sum << endl;
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
 
 
 
 
 