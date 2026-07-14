#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int min_money = 0;
    if(n % m == 0)
    {
        min_money = min(n * a, (n / m) * b);
    }
    else
    {
        min_money = min(n * a, (n / m) * b + min((n % m) * a, b)); 
    }
    
    cout << min_money << '
';
    
    return 0;
}