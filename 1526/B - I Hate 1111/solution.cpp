#include <bits/stdc++.h>
#define endl '
'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using ll = long long;
using namespace std;
 
bool solution()
{
    ll n;
    cin >> n;
 
    if(n % 11 == 0 || n % 111 == 0) return true;
    
    while(n > 0)
    {
        if(n % 11 == 0) return true;
        n -= 111;
    }
    
    return false;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        if(solution()) yes;
        else no;
    }
 
    return 0;
}