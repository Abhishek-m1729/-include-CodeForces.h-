#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int a;
    cin >> a;
 
    if(a == 1) cout << 1 << endl;
    else{
        int t0 = a-1;
        cout << 1 + 6*t0*(t0+1) << endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}