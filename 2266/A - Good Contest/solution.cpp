#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    
    int a, b, c;
    cin >> a >> b >> c;
    
    
    int diff = min(a, min(b,c));
    
    cout << n - diff << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t --)
        solution();
        
    return 0;
}