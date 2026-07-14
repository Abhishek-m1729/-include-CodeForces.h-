#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;++i){
	        cin >> v[i];
	    }
	    
	    vector<int> vec(n, 1);
	    
	    int maxchair = 0;
	    for(int i=0;i<n;++i){
	        if(vec[i]==1)
	            maxchair++;
	        vec[v[i]-1] = 0;
	    }
	    
	    cout << maxchair << "
";
	}
    return 0;
}