#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	vector<int> vec(3);
	for(auto &ele : vec) cin >> ele;
	
	sort(vec.begin(), vec.end());
	
	cout << vec[2] - vec[0] << endl;
    return 0;
}