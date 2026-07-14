#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int tc;
    cin >> tc;
    while(tc --)
    {
        vector<char> v(3);
        for(auto &ch : v) cin >> ch;
        
        if(v[1] == 'c' && v[2] == 'a') cout << "NO" << endl;
        else if(v[0] == 'c' && v[1] == 'a') cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}