#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    
    bool flag = false;
    for(int i=1; i<str.size(); ++i){
        if(str[i] > 96) flag = true;
    }
    
    if(str.size() == 1){
        if(str[0] > 96) cout << (char)toupper(str[0]) << "
";
        else cout << (char)tolower(str[0]) << "
";
    }
    else if(flag == true) cout << str << "
";
    else if(flag == false && str[0] < 82){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << "
";
    }
    else{
        str[0] = (char)toupper(str[0]);
        transform(str.begin()+1, str.end(), str.begin()+1, ::tolower);
        cout << str << "
";
    }
    return 0;
}