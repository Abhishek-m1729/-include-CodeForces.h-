#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) 
    {
        int n;
        cin >> n;
 
        vector<long long> ab(n);
        for(auto &ele : ab) cin >> ele;
 
        cout << gcd(ab[0], ab[n-1]) << endl;
    }
 
    return 0;
}