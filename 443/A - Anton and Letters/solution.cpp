#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string char_set;
    getline(cin, char_set);
    
    set<char> Distinct;
    for(char ch : char_set){
        if(ch >= 'a' && ch <= 'z') Distinct.insert(ch);
    }
    
    cout << Distinct.size() << endl;
	
    return 0;
}