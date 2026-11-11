#include <bits/stdc++.h>
#define endl "
"
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    
    int num = n / 2;
    
    if(n % 2 == 0) 
    {
        cout << num * num << endl;
        return;
    }
    else 
    {
        cout << num * (num + 1) << endl;
        return;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
	int t = 1;
	cin >> t;
	
	while(t --) solution();
 
    return 0;
}