#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int a, b;
    cin >> a >> b;
    
    if(a == 0)
    {
        if(b == 0) cout << 0 << endl;
        else if(b == 1) cout << 1 << endl;
        else cout << -1 << endl;
        return;
    }
 
    if(b - a > 1)
    {
        cout << -1 << endl;
        return;
    }
 
    if((a - b)%2 == 0) cout << a << endl;
    else cout << a + 1 << endl;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t --) solution();
	
    return 0;
}