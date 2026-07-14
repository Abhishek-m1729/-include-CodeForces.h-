#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    vector<int> vec(7);
	    for(int i=0;i<7;++i)
	        cin >> vec[i];
	        
	    sort(vec.begin(), vec.end());
	    
	    int sum = vec[6];
	    for(int i=0;i<6;++i)
	        sum -= vec[i];
	        
	    cout << sum << "
";
	}
 
}