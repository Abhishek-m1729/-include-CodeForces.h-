#include <bits/stdc++.h>
using namespace std;
 
long long XOR(vector<long long> &v, int n)
{
    long long maxm = 0;
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            maxm = max(maxm, v[i] ^ v[j]);
        }
    }
 
    return maxm;
}
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long n;
	    cin >> n;
	    vector<long long> vec(n);
	    for(int i=0;i<n;++i)
	        cin >> vec[i];
	    
	    long long ans = XOR(vec, n);
	    
	    cout << ans << "
";
	    
	}
 
}