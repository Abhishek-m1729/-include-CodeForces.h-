#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    vector<int> pos(n + 1);
    for(int i=1; i<=n; ++i)
    {
        int x;
        cin >> x;
 
        pos[x] = i % 2;
    }
 
    int balance = 0;
 
    for(int x=n; x>=1; --x)
    {
        if(pos[x] == 0) balance++;
        else balance--;
 
        if(abs(balance) > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
 
    cout << "YES" << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solution();
 
    return 0;
}