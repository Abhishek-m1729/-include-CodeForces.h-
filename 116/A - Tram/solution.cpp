#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	int maxcap = 0;
    int sum = 0;
	while(n--)
	{
	    int a, b;
	    cin >> a >> b;
	    sum += b-a;
	    
	    maxcap = max(sum, maxcap);
	}
	
	cout << maxcap << "
";
    return 0;
}