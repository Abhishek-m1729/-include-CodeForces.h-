#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t --) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int rouns = min(abs(a-b), min(abs(b-c), abs(c-a)));
	    
	    cout << rouns << '
';
	}
 
    return 0;
}