#include <bits/stdc++.h>
#define endl '
'
#define yes cout << "YES
"
#define no cout << "NO
"
#define nextline cout << '
'
// using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(auto &ele : a) cin >> ele;
 
    if(a[0] == a[n - 1])
    {
        no;
        return;
    }
 
    yes; 
 
    sort(a.begin(), a.end());
 
    cout << a.back() << " ";
    for(int i=0; i<n-1; ++i) cout << a[i] << " ";
 
    nextline;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solution();
 
    return 0;
}