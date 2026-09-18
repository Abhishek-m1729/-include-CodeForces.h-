#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> p(n);
	    int count0 = 0;
	    for(auto &ele : p)
	    {
	        cin >> ele;
	        if(ele == 0) count0 ++;
	    }
	    
	    if(count0 < 2) cout << -1 << endl;
	    else
	    {
	        if(p.front() == 0 && p.back() == 0) cout << 0 << endl;
	        else if(p.front() != 0 && p.back() == 0)
	        {
	            int cont_way = 0;
	            for(int i=1; i<n; ++i)
	            {
	                if(p[i] == 0)
	                {
	                    cont_way ++;
	                    break;
	                }
	            }
	            
	            cout << cont_way << endl;
	        }
	        else if(p.front() == 0 && p.back() != 0)
	        {
	            int cont = 0;
	            for(int i=n-2; i>=0; --i)
	            {
	                if(p[i] == 0) 
	                {
	                    cont ++;
	                    break;
	                }
	                
	            }
	            
	            cout << cont << endl;
	        }
	        else if(p.front() != 0 && p.back() != 0) cout << 2 << endl;
	    }
	    
	}
 
    return 0;
}