#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n, m;
    cin >> n >> m;
    
    if(m > n) cout << -1 << '
';
    else if(m == n) cout << m << '
';
    else
    {
        int min_move = -1;
        if(n % 2 == 0) min_move = n / 2;
        else min_move = n / 2 + 1;
        
        if(min_move % m == 0) cout << min_move << '
';
        else cout << min_move + m - min_move % m << '
';
    }
 
    return 0;
}