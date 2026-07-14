#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t --)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> hash(26, 0);
        for(auto &ch : s)
        {
            hash[ch - 'A'] ++;
        }
        
        int sum = accumulate(hash.begin(), hash.end(), 0);
        int count_0 = count(hash.begin(), hash.end(), 0);
        
        cout << sum + 26 - count_0 << '
';
    }
    
    return 0;
}