#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t --)
    {
        long long a, b;
        cin >> a >> b;
        
        if(a < b)
        {
            if((b-a)%2 == 0) cout << 2 << '
';
            else cout << 1 << '
';
        }
        else if(a == b) cout << 0 << '
';
        else 
        {
            if((a-b)%2 == 0) cout << 1 << '
';
            else cout << 2 << '
';
        }
    }
    
    return 0;
}