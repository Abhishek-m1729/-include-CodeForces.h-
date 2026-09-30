#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll a, b;
    cin >> a >> b;
 
    string str = to_string(b);
    reverse(str.begin(), str.end());
    ll b_ = stoll(str);
 
    cout << a + b_ << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}