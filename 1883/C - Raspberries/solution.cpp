#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t --)
    {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for(auto &ele : arr) cin >> ele;
        
        int min_operations = INT_MAX;
        
        bool check= false;
        for(int i=0; i<n; ++i){
            if(arr[i] % k == 0){
                min_operations = 0;
                check = true;
                break;
            }
        }
        
        if(k != 4 && check == false){
            for(int i=0; i<n; ++i){
                min_operations = min(min_operations, k - arr[i] % k);
            }
        }
        else if(k == 4 && check == false){
            int rem3 = 0, rem1 = 0, rem2 = 0;
            for(int i=0; i<n; ++i){
                if(arr[i] % 4 == 1) rem1 ++;
                else if(arr[i] % 4 == 2) rem2 ++;
                else if(arr[i] % 4 == 3) rem3 ++;
            }
            
            if(rem2 > 1) min_operations = 0;
            else if(rem3 > 0 || (rem2 > 0 && rem1 > 0)) min_operations = 1;
            else min_operations = 2;
        }
        
        cout << min_operations << '
';
    }
	
	return 0;
}