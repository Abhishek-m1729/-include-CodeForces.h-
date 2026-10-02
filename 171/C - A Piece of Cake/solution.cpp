#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    int total = 0;
    for(int i=1; i<=n; ++i)
    {
        int ele;
        cin >> ele;
 
        total += ele*i;
    }
 
    cout << total << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}