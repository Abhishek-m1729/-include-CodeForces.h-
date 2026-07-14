#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string nums1, nums2;
	cin >> nums1 >> nums2;
	
	int n = nums1.size();
	vector<int> res(n);
 
    for (int i = 0; i < n; ++i) {
        res[i] = (nums1[i] - '0') ^ (nums2[i] - '0');
    }
 
    for (int val : res) cout << val;
	
    return 0;
}