#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n, m;
    cin >> n >> m;
 
    if(n == m) 
    {
        if(n % 2 == 0) cout << "Malvika" << endl;
        else cout << "Akshat" << endl;
    }
    else if(n > m)
    {
        if(m % 2 != 0) cout << "Akshat" << endl;
        else cout << "Malvika" << endl;
    }
    else
    {
        if(n % 2 != 0) cout << "Akshat" << endl;
        else cout << "Malvika" << endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}