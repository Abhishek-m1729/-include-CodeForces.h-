#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc --)
    {
        int n;
        cin >> n;
        vector<int> Binary(n);
        for(auto &ele : Binary) cin >> ele;
        
        int cont = 0, ans = 0;
        for(auto ele : Binary){
            if(ele == 0){
                cont ++;
                ans = max(ans, cont);
            }
            else cont = 0;
        }
        
        cout << ans << endl;
    }
 
}