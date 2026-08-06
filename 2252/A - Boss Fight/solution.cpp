#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t --) {
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    for(auto &ele : a) cin >> ele;
	    
	    int sum = std::accumulate(a.begin(), a.end(), 0);
	    
	    unordered_map<int, int> mpp;
	    for(auto &ele : a) {
	        mpp[ele] ++;
	    }
	    
	    int maxCount = INT_MIN;
        int minCount = INT_MAX;
        int maxElement = -1;
    
        for(auto &p : mpp) {
            if (p.second > maxCount) {
                maxCount = p.second;
                maxElement = p.first;
            }
        }
        
        int remain = n - maxCount;
        if(remain + 1 >= maxCount) cout << sum << '
';
        else cout << sum - maxElement*maxCount + (n-maxCount+2)*maxElement << '
';
	}
 
}