#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;
    vector<long long> beauty(n);
    for(auto &ele : beauty) cin >> ele;
    
    sort(beauty.begin(), beauty.end());
    
    long long max_count = 0, min_count = 0;
    for(auto &ele : beauty){
        if(ele == beauty[0]) min_count ++;
        if(ele == beauty[n-1]) max_count ++;
    }
    
    if(beauty[0] == beauty[n-1]) 
        cout << 0 << " " << (n * (n-1)) / 2 << '
';
    else
        cout << beauty[n-1] - beauty[0] << " " << max_count * min_count << '
';
    
    return 0;
}