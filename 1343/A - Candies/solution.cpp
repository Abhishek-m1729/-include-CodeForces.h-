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
        
        long long x = 1;
        
        for(int k = 2; k < n;){
            long long temp = pow(2, k) - 1;
            
            if(n % temp == 0){
                x = n / temp;
                break;
            }
            else k ++;
        }
        
        cout << x << '
';
    }
    
    return 0;
}