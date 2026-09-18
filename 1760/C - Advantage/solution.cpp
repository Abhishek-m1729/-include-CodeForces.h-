#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	int t;
	cin >> t;
	
	while(t --)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> s(n);
	    int max1 = INT_MIN, max2 = INT_MIN;
        for(auto &ele : s) 
        {
            cin >> ele;
            
            if(ele > max1) 
            {
                max2 = max1;
                max1 = ele;
            } 
            else if(ele > max2 && ele < max1) 
            {
                max2 = ele;
            }
        }
        
        int max_c = 0;
        for(auto &el : s) 
        {
            if(el == max1) max_c ++;
        }
	 
	    if(max_c == n)
	    {
	        for(int i=0; i<n; ++i) cout << 0 << " ";
	    }
	    else
	    {
	        for(int i=0; i<n; ++i)
	        {
	            if(s[i] != max1) cout << s[i] - max1 << " ";
	            else
	            {
	                if(max_c == 1) cout << s[i] - max2 << " ";
	                else cout << 0 << " ";
	            }
	        }
	    }
	    
	    cout << endl;
	}
 
    return 0;
}