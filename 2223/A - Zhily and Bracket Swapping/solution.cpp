#include <bits/stdc++.h>
#define yes cout << "YES
"
#define no cout << "NO
"
using namespace std;
 
bool solution()
{
	int n;
	cin >> n;
 
	string a, b;
	cin >> a >> b;
 
	int pscore = 0, nscore = 0;
	for(int i=0; i<n; ++i)
	{
		if(a[i] == b[i]) pscore += (a[i] == '(') ? 1 : -1;
		else nscore ^= 1;
 
		if(pscore < nscore) return false;
	}
 
	return pscore == 0 && nscore == 0;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t;
	cin >> t;
 
	while(t --) 
	{
		if(solution()) yes;
		else no;
	}
 
	return 0;
}