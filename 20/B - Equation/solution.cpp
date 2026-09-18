#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    ll a, b, c;
    cin >> a >> b >> c;
 
    double d = b*b - 4*a*c;
    if(a == 0 && b == 0 && c == 0)
        cout << -1 << endl;
    else if(d < 0 || a == 0 && b == 0)
        cout << 0 << endl;
    else if(d == 0)
    {
        cout << 1 << endl;
        cout << fixed << setprecision(10) << -(b / (2.0 * a)) << endl;
    }
    else if(d > 0)
    {
        if(a == 0)
        {
            cout << 1 << endl << fixed << setprecision(10) << (double)-c/b << endl;
        }
        else
        {
            cout << 2 << endl;
            double root1 = (-b - sqrt(d))/(2.0 * a);
            double root2 = (-b + sqrt(d))/(2.0 * a);
            cout << fixed << setprecision(10) << min(root1, root2) << endl;
            cout << fixed << setprecision(10) << max(root1, root2) << endl;
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
 
    return 0;
}