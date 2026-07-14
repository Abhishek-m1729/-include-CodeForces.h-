#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
void solve() 
{
    long long n;
    cin >> n;
    
    long long size = 2 * n;
    
    for(long long i = 0; i < size; ++i) 
    {
        for(long long j = 0; j < size; ++j) 
        {
            long long block_row = i / 2;
            long long block_col = j / 2;
            
            if((block_row + block_col) % 2 == 0)
            {
                cout << '#';
            } 
            else 
            {
                cout << '.';
            }
        }
        cout << '
';
    }
}
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}