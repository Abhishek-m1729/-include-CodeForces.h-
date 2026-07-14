#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	int cou = 0;
	while(n--)
	{
	    int p, q;
	    cin >> p >> q;
	    
	    if(q-p >= 2) cou++;
	}
	
	cout << cou << "
";
	return 0;
}