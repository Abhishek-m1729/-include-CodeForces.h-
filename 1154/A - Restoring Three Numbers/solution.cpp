#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<long long> nums(4);
    for(auto &ele : nums) cin >> ele;
    
    long long abcd = *max_element(nums.begin(), nums.end());
    auto it = find(nums.begin(), nums.end(), abcd);
    if(it != nums.end()) nums.erase(it); 
    
    long long fa = nums[0] + nums[1];
    long long fb = nums[1] + nums[2];
    long long fc = nums[0] + nums[2];
    
    cout << abs(abcd - fa) << " " << abs(abcd - fb) << " " << abs(abcd - fc) << endl;
    return 0;
}