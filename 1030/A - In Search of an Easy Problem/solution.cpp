#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int res_sum = 0;
    while(n--){
        int r;
        cin >> r;
 
        res_sum += r;
    }
 
    if(res_sum == 0) cout << "EASY
";
    else cout << "HARD
";
    return 0;
}