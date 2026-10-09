#include <bits/stdc++.h>
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    
    int min_ele = INT_MAX;
    while(n --)
    {
        int ele;
        cin >> ele;
        
        min_ele = min(min_ele, abs(ele));
    }
    
    cout << min_ele << '
';
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	solution();
	
    return 0;
}