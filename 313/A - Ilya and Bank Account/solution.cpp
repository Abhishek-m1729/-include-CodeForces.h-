#include <bits/stdc++.h>
using namespace std;
long long n;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
	cin >> n;
	
	int ld = -n % 10;
	int sld = (-n / 10) % 10;
	
	if(n > 0) cout << n << '
';
	else
	{
	   if(ld >= sld) cout << n / 10 << '
';
	   else cout << (n / 100)*10 - ld << '
';
	}
 
    return 0;
}