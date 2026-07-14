#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n, a, b;
        cin >> n >> a >> b;
        
        int p1 = n * a;
        int p2 = (n / 2) * b, ans = 0;
        if(n % 2 == 0)
        {
            ans = min(p1, p2);
        }
        else 
        {
            ans = min(p1, p2 + a);
        }
        
        cout << ans << '
';
    }
    
    return 0;
}