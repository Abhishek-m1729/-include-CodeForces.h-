#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int> vec(n);
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> vec[i];
	    }
	    
	    vector<int> Hash(100, 0);
	    for(int i = 0; i < n; ++i)
	    {
	        Hash[vec[i]]++;
	    }
	    
	    int test = 0;
	    for(int i = 0; i < 100; ++i)
	    {
	        if(Hash[i] > 1) 
	        {
	            test = 1;
	            break;
	        }
	    }
	    
	    if(test == 1) cout << -1 << "
";
	    else {
	        sort(vec.begin(), vec.end());
	        for(int i = n-1; i >= 0; --i)
	        {
	            cout << vec[i] << " ";
	        }
	        
	        cout << "
";
	    }
	    
	}
}