#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	vector<int> Colmns(n);
	for(auto &ele : Colmns) cin >> ele;
	
	sort(Colmns.begin(), Colmns.end());
	
	for(auto ele : Colmns) cout << ele << " ";
 
    return 0;
}