#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> ab(n + 2, 0);
    for (int i=0; i<n; ++i)
    {
        int ele;
        cin >> ele;
        ab[ele]++;
    }
 
    bool alice = false;
    for(int i=0; i<n + 2; ++i)
    {
        if(ab[i] <= 2*k-2)
        {
            alice = false; 
            break;
        }
        if(ab[i] == 2*k-1) 
        {
            alice = true; 
            break; 
        }
    }
    
    if(alice) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t --) solution();
	
    return 0;
}