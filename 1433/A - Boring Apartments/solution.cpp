#include <bits/stdc++.h>
using namespace std;
 
int Count_digit(int x)
{
    if(x / 10 == 0) return 1;
    if(x / 100 == 0) return 2;
    if(x / 1000 == 0) return 3;
    return 4;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
	while(t --)
	{
	    int apartment_number;
	    cin >> apartment_number;
	    
	    int ld = apartment_number % 10;
	    int n = Count_digit(apartment_number);
	    
	    cout << 10 * (ld - 1) + (n*(n+1))/2 << '
';
	}
 
    return 0;
}