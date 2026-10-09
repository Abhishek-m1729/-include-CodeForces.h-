#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    ll s1 = LLONG_MIN, s2 = LLONG_MIN, s3 = LLONG_MIN;
    int sx1 = -1, sx2 = -1, sx3 = -1;
    for (int i = 0; i < n; ++i)
    {
        ll ele;
        cin >> ele;
 
        if (ele > s1)
        {
            s3 = s2;
            sx3 = sx2;
            s2 = s1;
            sx2 = sx1;
            s1 = ele;
            sx1 = i;
        }
        else if (ele > s2)
        {
            s3 = s2;
            sx3 = sx2;
            s2 = ele;
            sx2 = i;
        }
        else if (ele > s3)
        {
            s3 = ele;
            sx3 = i;
        }
    }
 
    ll m1 = LLONG_MIN, m2 = LLONG_MIN, m3 = LLONG_MIN;
    int mx1 = -1, mx2 = -1, mx3 = -1;
    for (int i = 0; i < n; ++i)
    {
        ll ele;
        cin >> ele;
 
        if (ele > m1)
        {
            m3 = m2;
            mx3 = mx2;
            m2 = m1;
            mx2 = mx1;
            m1 = ele;
            mx1 = i;
        }
        else if (ele > m2)
        {
            m3 = m2;
            mx3 = mx2;
            m2 = ele;
            mx2 = i;
        }
        else if (ele > m3)
        {
            m3 = ele;
            mx3 = i;
        }
    }
 
    ll gb1 = LLONG_MIN, gb2 = LLONG_MIN, gb3 = LLONG_MIN;
    int gbx1 = -1, gbx2 = -1, gbx3 = -1;
    for (int i = 0; i < n; ++i)
    {
        ll ele;
        cin >> ele;
 
        if (ele > gb1)
        {
            gb3 = gb2;
            gbx3 = gbx2;
            gb2 = gb1;
            gbx2 = gbx1;
            gb1 = ele;
            gbx1 = i;
        }
        else if (ele > gb2)
        {
            gb3 = gb2;
            gbx3 = gbx2;
            gb2 = ele;
            gbx2 = i;
        }
        else if (ele > gb3)
        {
            gb3 = ele;
            gbx3 = i;
        }
    }
 
    map<int, vector<pair<int, ll>>> mpp = {
        {1, {{sx1, s1}, {sx2, s2}, {sx3, s3}}},
        {2, {{mx1, m1}, {mx2, m2}, {mx3, m3}}},
        {3, {{gbx1, gb1}, {gbx2, gb2}, {gbx3, gb3}}}};
 
    ll friends = 0;
 
    for (auto &p1 : mpp[1])
    {
        for (auto &p2 : mpp[2])
        {
            for (auto &p3 : mpp[3])
            {
                if (p1.first == -1 || p2.first == -1 || p3.first == -1) continue;
                if (p1.first == p2.first || p1.first == p3.first || p2.first == p3.first) continue;
 
                friends = max(friends, p1.second + p2.second + p3.second);
            }
        }
    }
 
    cout << friends << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) solution();
 
    return 0;
}