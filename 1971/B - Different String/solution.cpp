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
	    
	    bool found = false;
	    for(int i=0; i<s.size()-1; ++i)
	    {
	        if(s[i] != s[i+1]){
	            cout << "YES" << '
';
	            swap(s[i], s[i+1]);
	            cout << s << '
';
	            found = true;
	            break;
	        }
	    }
	    
	    if(!found) cout << "NO" << '
';
	}
 
    return 0;
}