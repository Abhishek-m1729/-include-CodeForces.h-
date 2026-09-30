#include <bits/stdc++.h>
#define endl '
'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solution()
{
    int angle;
    cin >> angle;
    
    int fac_angle = 180 - angle;
 
    if(360 % fac_angle == 0) yes;
    else no;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--)
        solution();
 
    return 0;
}