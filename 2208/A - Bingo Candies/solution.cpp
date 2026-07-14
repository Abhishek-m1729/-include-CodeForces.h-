#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> vec(n*n);
        for(int i=0;i<n*n;i++){
            cin >> vec[i];
        }
        
        set <int> s;
        for(int i=0;i<n*n;i++){
            s.insert(vec[i]);
        }
        int ue = s.size();
        
        vector <int> v(s.begin(), s.end());
        
        vector <int> count;
        
        for(int i=0;i<ue;i++){
            int c = 0;
           for(int j=0;j<n*n;j++){
               if(v[i]==vec[j]) c++;
           }
           count.push_back(c);
        }
        
        int max =*max_element(count.begin(), count.end());
 
        if(max >= (n*n - n + 1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}