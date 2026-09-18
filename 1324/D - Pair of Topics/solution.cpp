#include <bits/stdc++.h>
#define ll long long
#define endl '
'
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    vector<pair<ll, ll>> ab(n);
    for(auto &ele : ab) cin >> ele.first;
    for(auto &ele : ab) cin >> ele.second;
 
    vector<ll> diff;
    for(auto &ele : ab) diff.emplace_back(ele.first - ele.second);
    sort(diff.begin(), diff.end());
    
    ll count_ans = 0;
 
    int l = 0, it = n-1;
    while(l < it) {
        if(diff[l] + diff[it] > 0) {
            count_ans += it - l;
            it --;
        }
        else l ++;
    }
        
    cout << count_ans << endl;
}
 
int main()
{
    solution();
    
    return 0;
}