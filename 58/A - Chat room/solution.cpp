#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    string target = "hello";
    int index = 0;
 
    for(char c : s)
    {
        if(index < target.size() && c == target[index]){
            index++;
        }
    }
 
    if(index == target.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
 
    return 0;
}   