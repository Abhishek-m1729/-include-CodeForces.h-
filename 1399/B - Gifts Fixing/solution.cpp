#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
        for(auto &ele : a) cin >> ele;
        for(auto &ele : b) cin >> ele;
 
        long long min_a = *min_element(a.begin(), a.end());
        long long min_b = *min_element(b.begin(), b.end());
 
        long long No_moves = 0;
        for(int i=0; i<n; ++i)
        {
            long long diff_a = a[i] - min_a;
            long long diff_b = b[i] - min_b;
 
            No_moves += max(diff_a, diff_b);
        }
 
        cout << No_moves << '
';
    }
 
    return 0;
}