#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	vector<pair<int, int>> friends;
	for(int i=0; i<n; ++i)
	{
	    int ele;
	    cin >> ele;
	    friends.push_back({ele, i+1});
	}
	
    sort(friends.begin(), friends.end());
    
    for(auto ele : friends)
    {
        cout << ele.second << " ";
    }
    
    return 0;
}