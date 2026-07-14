#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
 
    int ctA = count(str.begin(), str.end(), 'A');
    int ctD = count(str.begin(), str.end(), 'D');
 
    if(ctA > ctD) cout << "Anton
";
    else if(ctA == ctD) cout << "Friendship
";
    else cout << "Danik
";
    return 0;
}