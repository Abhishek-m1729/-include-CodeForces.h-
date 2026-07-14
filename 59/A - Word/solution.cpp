#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int Upp_count = 0, Low_count = 0;
    for(int i=0;i<s.size();++i){
        if(s[i] >= 97) Low_count++;
        else Upp_count++;
    }
    
    string str = "";
    if(Upp_count > Low_count){
        for(int i=0;i<s.size();++i){
            if(s[i] >= 97){
                s[i] -= 32;
                str.push_back(s[i]);
            }else{
                str.push_back(s[i]);
            }
        }
    }
    else{
        for(int i=0;i<s.size();++i){
            if(s[i] <= 90){
                s[i] += 32;
                str.push_back(s[i]);
            }else{
                str.push_back(s[i]);
            }
        }
    }
    
    cout << str << "
";
}