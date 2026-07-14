#include <bits/stdc++.h>
using namespace std;
 
int countDivisors(long long n) 
{
    int count = 0;
    for(int i=1; i<=sqrt(n); ++i) 
    {
        if(n%i == 0){
            if(n/i == i) count++;   
            else count += 2; 
        }
    }
    
    return count;
}
 
int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;
    vector<long long> Int(n);
    for(auto &ele : Int) cin >> ele;
    
    long long HCF = Int[0];
    for(int i=0; i<n; ++i)
    {
        HCF = gcd(HCF, Int[i]);
    }
    
    cout << countDivisors(HCF) << '
';
    
    return 0;
}