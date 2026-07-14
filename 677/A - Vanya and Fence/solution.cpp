#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, h;
    cin >> n >> h;
 
    int rw = 0;
    while(n--){
        int p;
        cin >> p;
        if(p > h) rw+=2;
        else rw+=1;
    }
 
    cout << rw << "
";
    return 0;
}