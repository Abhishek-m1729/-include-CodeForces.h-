#include <iostream>
#include <unordered_map>
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
        unordered_map<long long, long long> diff;
        vector<int> arr(n);
        for(auto ele=0; ele<n; ++ele){
            cin >> arr[ele];
            diff[arr[ele] - ele] ++;
        } 
        
       long long cont = 0;
       for(auto &ele : diff)
       {
           cont += ele.second*(ele.second-1)/2;
       }
       
       cout << cont << '
';
    }
    
    return 0;
}