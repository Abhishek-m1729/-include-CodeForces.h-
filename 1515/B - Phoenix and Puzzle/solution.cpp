#include <bits/stdc++.h>
using namespace std;
 
bool Is_PerfectSquare(long long ele)
{
    long long sq_root = sqrt(ele);
    return sq_root * sq_root == ele;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
 
    while(t--)
    {
        long long n;
        cin >> n;
       
        if(n % 2 != 0) cout << "NO" << '
';
        else 
        {
            long long chk = n / 2;
            if(Is_PerfectSquare(chk)) cout << "YES" << '
';
            else if(chk % 2 == 0 && Is_PerfectSquare(chk / 2)) cout << "YES" << '
';
            else cout << "NO" << '
'; 
        }
    }
    
    return 0;
}