#include <iostream>
using namespace std;
 
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int l, m, n, o;
       cin >> l >> m >> n >> o;
       
       if(l == m && m == n && n == o) cout << "YES" << "
";
       else cout << "NO" << "
";
   }
    
    return 0;
}