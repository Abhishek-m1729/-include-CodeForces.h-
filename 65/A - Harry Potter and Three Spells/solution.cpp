#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
 
    int p1 = b * d * f;
    int p2 = a * c * e;
 
    if(a == 0 && b > 0 && d > 0) cout << "Ron" << endl;
    else if(c == 0 && d > 0) cout << "Ron" << endl;
    else if(e == 0 && f > 0 && a > 0 && b > 0 && c > 0 && d > 0) cout << "Ron" << endl;
    else if(p2 != 0 && p1 > p2) cout << "Ron" << endl;
    else cout << "Hermione" << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}