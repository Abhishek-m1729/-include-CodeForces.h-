#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    set <char> s;
    for(char x : str){
        s.insert(x);
    }
    
    int hint = s.size();
    
    if(hint % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    
    return 0;
}