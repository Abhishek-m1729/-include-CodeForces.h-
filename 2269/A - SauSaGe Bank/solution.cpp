#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n, k;
    cin >> n >> k;
    
    int ans =2;
    for(int i=1; i<=n-k; ++i) ans*=2;
       
    cout<< ans + (k-1)*2 << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solution();
 
    return 0;
}