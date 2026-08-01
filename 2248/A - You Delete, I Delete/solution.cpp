#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
	while(t --)
	{
	    string s;
	    cin >> s;
	    
	    char target0 = '0';
        char target1 = '1';
    
        auto it0 = find(s.begin(), s.end(), target0);
        if(it0 != s.end()) s.erase(it0);
    
        auto it1 = find(s.begin(), s.end(), target1);
        if(it1 != s.end()) s.erase(it1);
	    
	    cout << s << '
';
	}
 
    return 0;
}