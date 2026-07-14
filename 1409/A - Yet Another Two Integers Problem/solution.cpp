#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        long long a, b;
        cin >> a >> b;
        
        long long sum_diff = abs(a - b);
        if(sum_diff == 0) cout << 0 << endl;
        else cout << (sum_diff + 10 - 1) / 10 << endl;
    }
    return 0;
}