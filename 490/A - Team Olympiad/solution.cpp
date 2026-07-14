#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	vector<int> t(n);
	
	int cont1 = 0, cont2 = 0, cont3 = 0;
	vector<int> idx1, idx2, idx3;
	for(auto i=0; i<n; ++i){
	    cin >> t[i];
	    if(t[i] == 1){
	        cont1 ++;
	        idx1.push_back(i+1);
	    } 
	    if(t[i] == 2){
	        cont2 ++;
	        idx2.push_back(i+1);
	    }
	    if(t[i] == 3){
	        cont3 ++;
	        idx3.push_back(i+1);
	    }
	}
	
	if(cont3 == 0 || cont2 == 0 || cont1 == 0) cout << 0 << '
';
	else
	{
	    int ans = min(cont1, min(cont2, cont3));
	    cout << ans << '
';
	    for(int i=0; i<ans; ++i){
	        cout << idx3[i] << " " << idx2[i] << " " << idx1[i] << '
';
	    }
	}
 
    return 0;
}