#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	vector<long long> d(n);
	for(auto &ele : d) cin >> ele;
	
	vector<long long> d_copy = d;
	sort(d_copy.begin(), d_copy.end());
	
	if(d == d_copy){
	    cout << "yes" << '
' << 1 << " " << 1 << '
';
	    return 0;
	} 
	
	vector<int> indx;
	for(int i=0; i<n; ++i){
	    if(d[i] != d_copy[i]){
	       indx.push_back(i);
	    } 
	}
	
    reverse(d_copy.begin() + indx.front(), d_copy.begin() + indx.back() + 1);
 
    if(d != d_copy) cout << "no" << '
';
    else cout << "yes" << '
' << indx[0]+1 << " " << indx.back()+1 << '
';
    
    return 0;
}