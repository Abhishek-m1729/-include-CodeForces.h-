#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
bool Is_Sorted(vector<long long> v)
{
    for(int i=0; i<v.size()-1; ++i){
        if(v[i] > v[i+1]) return false;
    }
    return true;
}
 
int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, k;
	    cin >> n >> k;
	    vector<long long> v(n);
	    for(int i=0; i<n; ++i) cin >> v[i];
	    
	    if(Is_Sorted(v)) cout << "YES" << endl;
	    else if(Is_Sorted(v) == false && k == 1) cout << "NO" << endl;
	    else cout << "YES" << endl;
	    
	}
	return 0;
}