#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i=0;i<n;++i) cin >> v[i];
	
	int dg = 1;
	for(int i=0;i<n-1;++i){
	    if(v[i] != v[i+1])
	        dg++;
	}
	
	cout << dg << "
";
	return 0;
}