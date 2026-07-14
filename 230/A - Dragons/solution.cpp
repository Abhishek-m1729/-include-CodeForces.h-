#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int s, n;
	cin >> s >> n;
 
	vector<pair<int, int>> str_bonus(n);
	for(auto &ele : str_bonus)
	{
		cin >> ele.first >> ele.second;
	}
 
	sort(str_bonus.begin(), str_bonus.end(), [](auto &ele1, auto &ele2){ return ele1.second > ele2.second; });
 
    int found = 0;
    for(auto i=0; i<n; ++i)
    {
        for(auto j=0; j<n; ++j){
            if(str_bonus[j].first < s){
                s += str_bonus[j].second;
                found ++;
                str_bonus[j] = {INT_MAX, 0};
                break;
            }
        }
    }
 
	if(found == n) cout << "YES" << '
';
	else cout << "NO" << endl;
	
	return 0;
}