#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    int n, m;
    cin >> n >> m;
 
    if(n >= m) cout << n-m << endl;
    else{
        int count_N = 0;
        while(m > n)
        {
            if(m & 1) m ++;
            else m /= 2;
            count_N ++;
        }
        count_N += n-m;
 
        cout << count_N << endl;
    }
 
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}