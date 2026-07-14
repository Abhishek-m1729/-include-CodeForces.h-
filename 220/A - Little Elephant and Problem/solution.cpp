#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> ele(n);
    for(auto &a : ele) cin >> a;
    
    vector<long long> elephant(n);
    copy(ele.begin(), ele.end(), elephant.begin());
    
    sort(ele.begin(), ele.end());
    
    int Not_Match = 0;
    
    for(int i=0; i<n; ++i)
    {
        if(ele[i] != elephant[i]) Not_Match ++;
    }
    
    if(Not_Match > 2) cout << "NO" << '
';
    else cout << "YES" << '
';
    
    return 0;
}