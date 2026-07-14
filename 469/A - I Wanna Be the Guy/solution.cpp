#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	
	set<int> levels;
	
	int p;
	cin >> p;
	vector<int> X(p);
	for(auto &ele : X)
	{
	    cin >> ele;
	    levels.insert(ele);
	}
	
	int q;
	cin >> q;
	vector<int> Y(q);
	for(auto &ele : Y)
	{
	    cin >> ele;
	    levels.insert(ele);
	}
	
	int sum = accumulate(levels.begin(), levels.end(), 0);
 
    if(sum == n*(n+1)/2) cout <<  "I become the guy." << '
';
    else cout << "Oh, my keyboard!" << '
';
    
    return 0;
}