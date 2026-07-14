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
	    
	    int even_candies = 0, odd_candies = 0;
	    vector<int> candies(n);
	    for(auto &ele : candies){
	        cin >> ele;
	        if(ele % 2 == 0) even_candies += ele;
	        else odd_candies += ele;
	    }
	    
	    if(even_candies > odd_candies) cout << "YES" << '
';
	    else cout << "NO" << '
';
	}
 
    return 0;
}