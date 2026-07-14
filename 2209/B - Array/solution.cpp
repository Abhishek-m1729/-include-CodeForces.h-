#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        for(int i = 0; i < n; i++) {
            int ai = 0, aj = 0;
 
            for(int j = i + 1; j < n; j++) {
                if(a[j] > a[i]) ai++;
                if(a[j] < a[i]) aj++;
            }
 
            cout << max(ai, aj) << " ";
        }
        cout << endl;
    }
}