#include <bits/stdc++.h>
#define endl '
'
#define yes cout << "YES" << endl 
#define no cout << "NO" << endl 
using ll = long long;
using namespace std;
 
bool solution()
{
    int n;
    cin >> n;
    
    int rem = n % 11;
    if(111*rem <= n) return true;
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