#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	
	vector<string> Team(n);
	for(auto &str : Team) cin >> str;
	
	int Team1_goal = 1, Team2_goal = 0, Team2_idx = -1;
	for(int i=0; i<n-1; ++i)
	{
	    if(Team[0] == Team[i+1]) Team1_goal ++;
	    else{
	        Team2_goal ++;
	        Team2_idx = i+1;
	    } 
	}
	
	if(Team1_goal > Team2_goal) cout << Team[0] << '
';
	else if(Team2_goal > Team1_goal) cout << Team[Team2_idx] << '
';
	
    return 0;
}