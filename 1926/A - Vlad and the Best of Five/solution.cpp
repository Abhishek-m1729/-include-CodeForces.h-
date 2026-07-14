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
	    
	    int A_count = 0, B_count = 0;
	    for(auto &ch : s)
	    {
	        if(ch == 'A') A_count ++;
	        else B_count ++;
	    }
	    
	    if(A_count > B_count) cout << "A" << '
';
	    else cout << "B" << '
';
	}
 
    return 0;
}