#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	int sa = 0, sb = 0, sc = 0;
	
	while(n--){
	    int a, b, c;
	    cin >> a >> b >> c;
	  
	    sa += a; sb += b; sc += c;
	}
	
	if(sa+sb+sc == 0 && sa == sb && sb == sc) cout << "YES" << "
";
	else cout << "NO" << "
";
	
    return 0;
}