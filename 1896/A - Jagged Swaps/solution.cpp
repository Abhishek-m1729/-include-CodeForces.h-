#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
bool solution()
{
    int n;
    cin >> n;
 
    bool found = false;
    for(int i=0; i<n; ++i)
    {
    	int ele;
    	cin >> ele;
 
    	if(i == 0 && ele == 1) found = true;
    }
 
    return found;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while(t --) 
    {
    	if(solution()) cout << "YES
";
    	else cout << "NO
";
    }
 
    return 0;
}