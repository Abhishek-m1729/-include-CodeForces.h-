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
    int n;
    cin >> n;
 
    vector<ll> a(n);
 
    bool zero = false;
    for(auto &ele : a) 
    {
        cin >> ele;
        if(ele == 0) zero = true;
    }
 
    if(zero) 
    {
        cout << n << endl;
        return;
    }
 
    sort(a.begin(), a.end());
    
    if(a[0] < n) cout << n << endl;
    else cout << 0 << endl;
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