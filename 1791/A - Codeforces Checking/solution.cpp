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
        char ch;
        cin >> ch;
        
        string str = "codeforces";
        
        if(str.find(ch) != string::npos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}