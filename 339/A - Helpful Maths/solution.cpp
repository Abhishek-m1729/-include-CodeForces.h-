#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string str;
	cin >> str;
	
    string s;
    for(int i=0;i<str.size();++i){
        if(i % 2 == 0)
            s.push_back(str[i]);
    }
    
	sort(s.begin(), s.end());
	
	for(int i=0;i<s.size();++i){
        if(i % 2 != 0)
            s.insert(i, 1, '+');
    }
    
    cout << s << "
";
    
}