#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for(int i=0; i<n; ++i) cin >> v[i];
 
        int cont = 0, ele = v[0];
 
        for(int i=0; i<n; ++i){
            if(ele == v[i]) cont++;
        }
 
        if(cont == 1)
        {
            for(int i=0; i<n; ++i){
                if(ele == v[i]){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<n; ++i){
                if(ele != v[i]){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
 
    return 0;
}