#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        int n;
        cin >> n;
        
        int count1 = 0, count2 = 0;
        vector<int> v(n);
        for(auto &ele : v){
            cin >> ele;
            if(ele == 1) count1 ++;
            else count2 ++;
        }
        
        if(count2 == n){
            if(n % 2 == 0) cout << n / 2 << endl;
            else cout << -1 << endl;
        }
        else if(count1 == n) cout << 1 << endl;
        else if(count2 % 2 != 0) cout << -1 << endl;
        else
        {
            int cont = 0;
            for(auto i=0; i<n; ++i){
                if(v[i] == 2) cont++;
                if(cont == count2 / 2){
                    cout << i + 1 << endl;
                    break;
                } 
            }
        }
        
    }
    return 0;
}