#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    map<int, int, greater<int>> a;
    for(int i=0; i<n; ++i)
    {
       int ele;
       cin >> ele;
       
       a[ele] ++; 
    }
    int max_rep = INT_MIN;
    for(auto &ele : a) max_rep = max(max_rep, ele.second);
    
    while(max_rep)
    {
        for(auto &ele : a) 
        {
            if(ele.second == 0) continue;
            else 
            {
                cout << ele.first << " ";
                ele.second --;
            }
        }
        max_rep --;
    }
    cout << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t --)
	    solution();
	
    return 0;
}