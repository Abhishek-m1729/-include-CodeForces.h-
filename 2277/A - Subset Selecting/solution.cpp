#include <bits/stdc++.h>
#define endl '
'
#define yes cout << "YES
"
#define no cout << "NO
"
using ll = long long;
using namespace std;
 
void solution()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n+1, 0);
    for(int i=0; i<n; ++i)
    {
        int ele;
        cin >> ele;
        a[ele] ++;
    }
 
    int ans = 0;
 
    for(int mex=0; mex<=n; ++mex) 
    {
        ans += a[mex];
 
        if(a[mex] == 0 || ans < k) 
        {
            cout << mex << endl;
            return;
        }
 
        ans -= k;
    }
 
    cout << n + 1 << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t --) solution();
 
    return 0;
}