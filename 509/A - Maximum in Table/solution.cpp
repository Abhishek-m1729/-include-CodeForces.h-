#include <bits/stdc++.h>
using namespace std;
 
int aij(int n, int k)
{
    if(n == 1 || k == 1) return 1;
    return aij(n-1, k) + aij(n, k-1);
}
 
int main()
{
    int n;
    cin >> n;
    
    long long ans = aij(n, n);
    
    cout << ans << endl;
 
    return 0;
}