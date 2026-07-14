#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    cout << fixed << setprecision(10);
 
    while(t--) {
 
        int n;
        cin >> n;
 
        vector<double> c(n), p(n);
 
        for(int i = 0; i < n; i++)
            cin >> c[i] >> p[i];
 
        double points = 0;
 
        for(int i = n-1; i >= 0; i--) {
            double take = c[i] + (1 - p[i]/100.0) * points;
            points = max(points, take);
        }
 
        cout << points << "
";
    }
}