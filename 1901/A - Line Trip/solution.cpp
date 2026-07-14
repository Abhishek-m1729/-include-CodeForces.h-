#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t --)
    {
        int n, x;
        cin >> n >> x;
        vector<int> fuel_station(n);
        for (auto &ele : fuel_station) cin >> ele;
 
        int min_tank_size = 0;
        for(int i=1; i<n; i++)
        {
            min_tank_size = max(min_tank_size, fuel_station[i] - fuel_station[i-1]);
        }
    
        min_tank_size = max(min_tank_size, max(2*(x-fuel_station[n-1]), fuel_station[0]));
    
        cout << min_tank_size << '
';
    }
 
    return 0;
}