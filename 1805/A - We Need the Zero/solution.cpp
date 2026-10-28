#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    int xor_val = 0;
    
    for(int i=1; i<n+1; ++i)
    {
    	int ele;
    	cin >> ele;
       	xor_val ^= ele;
    }
 
    if(n%2 != 0) cout << xor_val << endl;
    else 
    {
        if(xor_val == 0) cout << 0 << endl;
        else cout << -1 << endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t --) solution();
 
    return 0;
}