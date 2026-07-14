#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int factor(int k, int l, int m, int n, int d, int s)
{
    unordered_set<int> uni(s);
    for(int i=1; i<=d/k; i++) uni.insert(i*k);
    for(int i=1; i<=d/l; i++) uni.insert(i*l);
    for(int i=1; i<=d/m; i++) uni.insert(i*m);
    for(int i=1; i<=d/n; i++) uni.insert(i*n);
    return uni.size();
}
 
int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	
	int s = d/k + d/l + d/m + d/n;
	
	cout << factor(k, l, m, n, d, s) << endl;
    return 0;
}