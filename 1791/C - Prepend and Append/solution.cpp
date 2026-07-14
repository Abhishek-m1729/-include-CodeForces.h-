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
	    int n;
	    cin >> n;
	    string Binary;
	    cin >> Binary;
	    
	    int left = 0, right = n-1;
	    while(left < right && Binary[left] != Binary[right])
	    {
	        left ++;
	        right --;
	    }
	    
	    cout << right - left + 1 << '
';
	}
 
    return 0;
}