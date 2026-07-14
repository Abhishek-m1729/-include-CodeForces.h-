#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string str = "";
 
    for(int i = 0; i < s.size(); i++) {
        if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y' &&
           s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') {
               if(s[i] <= 90)
                s[i]+=32;
                str.push_back(s[i]);
        }
    }
 
    for(int i=0;i<str.size();++i){
        if(i % 2 ==0)
            str.insert(i, 1, '.');
    }
    
    cout << str << "
";
}