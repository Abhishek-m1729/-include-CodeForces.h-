#include <bits/stdc++.h>
#define endl '
'
// using ll = long long;
using namespace std;
 
void solution()
{
	int n, k;
	cin >> n >> k;
 
	vector<int> a(n), b(n);
	for(auto &ele : a) cin >> ele;
	for(auto &ele : b) cin >> ele;
 
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
 
	int max_sum = accumulate(a.begin(), a.begin()+(n-k), 0);
    int i = n-k, j = 0;
    while(k --)
    {
        if(a[i] >= b[j])
        {
            max_sum += a[i];
            i ++;
        }
        else 
        {
            max_sum += b[j];
            j ++;
        }
    }
 
	cout << max_sum << endl;
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