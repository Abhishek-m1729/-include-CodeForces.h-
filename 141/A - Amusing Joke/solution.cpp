#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	string guest;
	string residence_host;
	string pile_name;
	cin >> guest >> residence_host >> pile_name;
	
	bool found = false;
	if(guest.size() + residence_host.size() != pile_name.size()){
	    found = true;
	    cout << "NO" << '
';
	} 
	
	for(int i=0; i<guest.size(); ++i)
	{
        auto it = find(pile_name.begin(), pile_name.end(), guest[i]);
        if(it != pile_name.end()) {
            pile_name.erase(it);
        }
	}
	
	for(int j=0; j<residence_host.size(); ++j)
	{
        auto it = find(pile_name.begin(), pile_name.end(), residence_host[j]);
        if(it != pile_name.end()) {
            pile_name.erase(it);
        }
	}
	
	if(!found)
	{
	    if(pile_name.size() == 0) cout << "YES" << '
';
	    else cout << "NO" << '
';
	}
	
	return 0;
}