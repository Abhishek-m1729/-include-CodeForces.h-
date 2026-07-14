#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc --)
    {
        int n;
        cin >> n;
        
        vector<int> temp(n, 0);
        for(int i=0; i<n; ++i){
            for(int j=0; j<4; ++j){
                char ch;
                cin >> ch;
                if(ch == '#') temp[i] = (j + 1);
            }
        }
        
        for(int k=n-1; k>=0; --k){
            cout << temp[k] << " ";
        }
        cout << endl;
    }
    return 0;
}