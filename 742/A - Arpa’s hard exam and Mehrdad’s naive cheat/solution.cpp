#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n;
	cin >> n;
	
	if(n == 0) cout << 1;
	else if(n % 4 == 0) cout << 6;
	else if((n+1) % 4 == 0) cout << 2;
	else if((n+2) % 4 == 0) cout << 4;
	else cout << 8;
 
    return 0;
}