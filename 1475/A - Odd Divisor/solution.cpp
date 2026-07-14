#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n;
        cin >> n;
        
        bool flag = false;
        if(n % 2 != 0) cout << "YES" << endl;
        else 
        {
            while(n > 1){
                if(n % 2 != 0){
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
                n /= 2;
            }
            if(!flag) cout << "NO" << endl;
        }
        
    }
    
    return 0;
}