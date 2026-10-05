#include <bits/stdc++.h>
using namespace std;
 
void solution()
{
    string s;
    cin >> s;
 
    for(int ele=0; ele<1000; ele += 8) 
    {
        string t = to_string(ele);
 
        int j = 0;
        for(char c : s) 
        {
            if(j < (int)t.size() && c == t[j]) j++;
        }
 
        if(j == (int)t.size()) 
        {
            cout << "YES
";
            cout << t << '
';
            return;
        }
    }
 
    cout << "NO
";
}
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}