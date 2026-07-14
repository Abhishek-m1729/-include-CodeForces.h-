#include <bits/stdc++.h>
using namespace std;
 
bool distinct(int y)
{
    string s = to_string(y);
    set<char> st(s.begin(), s.end());
    return st.size() == s.size();
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int y;
    cin >> y;
 
    for(int next = y + 1; ; ++next) {
        if(distinct(next)){
            cout << next << endl;
            break;
        }
    }
    
    return 0;
}