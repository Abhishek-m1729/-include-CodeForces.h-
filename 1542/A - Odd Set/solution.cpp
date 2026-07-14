#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        
        int even_count = 0, odd_count = 0;
        vector<int> nums(2*n);
        for(auto &ele : nums)
        {
            cin >> ele;
            
            if(ele % 2 == 0) even_count ++;
            else odd_count ++;
        }
        
        if(even_count == odd_count) cout << "YES" << '
';
        else cout << "NO" << '
';
    }
    
    return 0;
}