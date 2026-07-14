#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    
    vector<int> vec = {100, 20, 10, 5, 1};
    
    long long cont = 0;
    
    for(int i=0; i<5; ++i)
    {
        cont += n/vec[i];
        n %= vec[i];
    }
    
    cout << cont << endl;
    return 0;
}