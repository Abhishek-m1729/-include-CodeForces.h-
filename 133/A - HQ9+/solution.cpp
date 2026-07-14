#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string p;
	cin >> p;
	
	string str = {'H', 'Q', '9'};
	bool found = true;
	for(int i=0; i<4; ++i){
	    if(p.find(str[i]) != string::npos){
	        cout << "YES" << endl;
	        found = true;
	        break;
	    } 
	    else found = false;
	}
	
	if(!found) cout << "NO" << endl;
	
	return 0;
}