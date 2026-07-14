#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> Home(n), Guest(n);
    unordered_map<int, int> Counter;
    for(int i=0; i<n; ++i){
        cin >> Home[i] >> Guest[i];
        Counter[Guest[i]] ++;
    }
    
    int cont = 0;
    for(int i=0; i<n; ++i){
        cont += Counter[Home[i]];
    }
    
    cout << cont << endl;
    
    return 0;
}