#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	long long t;
	cin >> t;
	while(t --)
	{
	    int n, m;
	    cin >> n >> m;
	    
	    string x, s;
	    cin >> x >> s;
	    
	    int operation = 0;
	    bool found = false;
	    
	    for(int i=0; i<7; ++i)
	    {
	        if(x.find(s) != string::npos){
	            found = true;
	            break;
	        }
	        x += x;
	        operation ++;
	    }
	    
	    if(found) cout << operation << '
';
	    else cout << -1 << '
';
	}
	
    return 0;
}