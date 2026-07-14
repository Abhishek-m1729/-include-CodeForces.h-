#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int a = 3*n-1, b = 3*n;
	    for(int i=1;i<=n;++i){
	        cout << i << " " << a << " " << b << " ";
	        a -= 2;
	        b -= 2;
	    }
	    
	    cout << "
";
	}
 
}