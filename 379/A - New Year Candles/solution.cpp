#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;
	
	int time_candles = a;
	while(a >= b)
	{
	    time_candles += a/b;
	    a = a/b + a%b;
	}
	
	cout << time_candles << '
';
	
    return 0;
}