#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
bool isPrime(long long num)
{
    if(num < 2) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
 
    for(long long i = 3; i * i <= num; i += 2)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	while(n --)
	{
	    long long num;
	    cin >> num;
	    
	    long long root = sqrtl(num);
 
        if(root * root == num && isPrime(root)) cout << "YES" << endl;
        else cout << "NO" << endl; 
	}
	
	return 0;
}