#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t --)
	{
	    long long n;
	    cin >> n;
	    
	    long long a = -1, b = -1, c = -1;
	    
	    for(long long i=2; i<sqrt(n); ++i){
	        if(n % i == 0){
	            a = i;
	            break;
	        }
	    }
	    
	    if(a == -1) 
	    {
	        cout << "NO" << '
';
	        continue;
	    }
	     n /= a;
	     
	    for(long long j = a+1; j<sqrt(n); ++j){
	        if(n % j == 0){
	            b = j;
	            break;
	        }
	    }
	    
	    if(b == -1){
	        cout << "NO" << '
';
	        continue;
	    }
	    
	    c = n / b;
	    
	    if(c > 1 && c != a && c != b){
	        cout << "YES" << '
';
	        cout << a << " " << b << " " << c << '
';
	    }
	    else cout << "NO" << '
';
	    
	}
 
    return 0;
}