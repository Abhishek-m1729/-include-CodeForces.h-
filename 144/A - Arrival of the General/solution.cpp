#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> Heights(n);
	for(auto &ht : Heights) cin >> ht;
	
	int maxm = INT_MIN, minm = INT_MAX;
	int maxm_idx = -1, minm_idx = -1;
	for(int i=n-1; i>=0; --i){
	    if(maxm <= Heights[i]){
	        maxm = Heights[i];
	        maxm_idx = i;
	    } 
	    if(minm > Heights[i]){
	        minm = Heights[i];
	        minm_idx = i;
	    } 
	}
	
    int no_swaps = maxm_idx + (n-1 - minm_idx);
    if(maxm_idx > minm_idx) no_swaps--;
    
	cout << no_swaps << endl;
	return 0;
}