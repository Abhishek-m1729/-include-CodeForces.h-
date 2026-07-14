#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    int cap = int(str[0]);
    if(cap >= 65 and cap <=90){cout << str;}
    else{
        str[0] = char(cap-32);
        cout << str;
    }
    
    return 0;
}