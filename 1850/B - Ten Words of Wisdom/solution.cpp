#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tc;
	cin >> tc;
	while(tc --)
	{
	    int n;
	    cin >> n;
	    vector<pair<int, int>> ab(n);
	    for(auto & ele : ab){
	        cin >> ele.first >> ele.second;
	    }
	    
	    int maxm = INT_MIN;
	    int indx = -1;
	    for (int i=0; i<n; ++i){
	        if(ab[i].first <= 10){
                if(ab[i].second > maxm){
                    maxm = ab[i].second;
                    indx = i;
                }
            }
        }
        
        cout << indx + 1 << endl;
	}
    return 0;
}