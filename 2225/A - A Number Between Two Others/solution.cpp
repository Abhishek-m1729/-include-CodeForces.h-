#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y;
        cin >> x >> y;
        
        if(y/x > 2) cout << "YES" << "
";
        else cout <<  "NO" << "
";
    }
    return 0;
}