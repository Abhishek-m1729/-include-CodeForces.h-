#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	vector<long long> money(n);
	for(auto &ele : money) cin >> ele;
	
	int progress = 0, day_count = 0;
	for(int i=0; i<n-1; ++i){
	    if(money[i] <= money[i+1]){
	        day_count ++;
	        progress = max(progress, day_count);
	    } 
	    else day_count = 0;
	}
	
    cout << progress + 1 << endl;
    
    return 0;
}