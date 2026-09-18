#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solution()
{
    string s;
    cin >> s;
 
    int posABL = -1, posBAL = -1, posABR = -1, posBAR = -1;
    if(s.find("AB") != string::npos) posABL = s.find("AB");
    if(s.rfind("AB") != string::npos) posABR = s.rfind("AB");
    if(s.rfind("BA") != string::npos) posBAR = s.rfind("BA");
    if(s.find("BA") != string::npos) posBAL = s.find("BA");
 
    if(posBAL == -1 || posABL == -1) cout << "NO" << endl;
    else if(abs(posBAL - posABR) > 1 || abs(posBAR - posABL) > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solution();
 
    return 0;
}