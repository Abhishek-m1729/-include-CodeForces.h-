#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    int forceX = 0, forceY = 0, forceZ = 0;
    while(n --)
    {
        int x, y, z;
        cin >> x >> y >> z;
 
        forceX += x;
        forceY += y;
        forceZ += z;
    }
 
    if(forceX == 0 && forceY ==0 && forceZ == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solution();
 
    return 0;
}