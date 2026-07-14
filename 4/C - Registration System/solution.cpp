#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#define endl '
'
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i=0; i<n; ++i) cin >> vec[i];
    
    unordered_map<string, int> mpp;
    for(int i=0; i<n; ++i)
    {
        if(mpp.count(vec[i])){
            mpp[vec[i]] ++;
            cout << vec[i] + to_string(mpp[vec[i]]) << endl;
        }
        else{
            cout << "OK" << endl;
            mpp[vec[i]] = 0;
        }
    }
    
    return 0;
}