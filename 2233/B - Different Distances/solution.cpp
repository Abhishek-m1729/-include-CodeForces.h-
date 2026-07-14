#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while(t--) 
    {
        int n; 
        cin >> n;
        vector<int> ans;
 
        if(n % 2 == 0)
        {
            for(int i=1; i<=n; ++i) ans.push_back(i);
           
            for(int i=n; i>=1; --i)  ans.push_back(i);
            
            for(int i=1; i<=n; ++i) ans.push_back(i);
            
            for(int i=1; i<=n; ++i) ans.push_back(i);
            
        }
        else
        {
            if(n == 3) ans = {3, 3, 2, 1, 1, 2, 1, 2, 2, 3, 1, 3};
            else
            {
                ans = {3, 3, 2, 1, 1, 2, 1, 2, 2, 3, 1, 3};
                
                for(int i=4; i<=n; ++i) ans.push_back(i);
           
                for(int i=n; i>=4; --i)  ans.push_back(i);
            
                for(int i=4; i<=n; ++i) ans.push_back(i);
            
                for(int i=4; i<=n; ++i) ans.push_back(i);
            }
        }
 
        for(auto ele : ans) cout << ele << " ";
        cout << "
";
    }
    
    return 0;
}