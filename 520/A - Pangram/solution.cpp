#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
    string str;
    cin >> str;
    
    for (char &c : str) c = tolower(c);
    
    string LAlpha = "abcdefghijklmnopqrstuvwxyz";
    bool found = true;
    
    for (int i=0; i<26; ++i){
        if (str.find(LAlpha[i]) == string::npos){
            found = false;
            break;
        }
    }
    
	if(found) cout << "YES" << endl;
	else cout << "NO" << endl;
 
    return 0;
}