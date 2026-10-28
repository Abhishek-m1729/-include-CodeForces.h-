#include <bits/stdc++.h>
#define endl '
'
using ll = long long;
using namespace std;
 
void solution()
{
    int n;
    cin >> n;
    
    vector<ll> a(n);
    for(auto &ele : a) cin >> ele;
    
    sort(a.begin(), a.end());
    
    int counter = 0;
    ll ele = a[0];
    for(auto i : a)
    {
    	if(i == ele) counter ++;
    	else break;
    } 
 
    if(counter == n)
    {
    	cout << -1 << endl;
    	return;
    }
 
    cout << counter << " " << n-counter << endl;
    for(int i=0; i<counter; ++i) cout << ele << " ";
    cout << endl;
	for(int i=counter; i<n; ++i) cout << a[i] << " ";
	cout << endl;
}
 
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t --) solution();
	
    return 0;
}