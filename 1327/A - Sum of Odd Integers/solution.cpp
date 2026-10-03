#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
string solution()
{
    ll n, k;
    cin >> n >> k;
 
    if(k % 2 == 0 && n % 2 != 0) return "NO";
    if(k % 2 != 0 && n % 2 == 0) return "NO";
    if(n < k*k) return "NO";
    if(n == k*k) return "YES";
    if((k*k - n) % 2 != 0) return "NO";
    if((k*k - n)/2 == k) return "YES";    
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t --) cout << solution() << endl;
 
    return 0;
}