#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t --)
	{
	    string b;
	    cin >> b;
	    
	    int sg = b.size();
	    
	    if(sg <= 2) cout << b << '
';
	    else
	    {
	        int i=0;
	        for(i=0; i<sg; i += 2){
	            cout << b[i];
	        }
	        cout << b[sg-1];
	        cout << '
';
	    }
	    
	}
	
	return 0;
}