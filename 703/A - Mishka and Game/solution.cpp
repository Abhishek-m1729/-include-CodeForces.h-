#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int16_t n;
    cin >> n;
    
    int16_t misha_win = 0, chris_win = 0;
    while(n --)
    {
        int8_t m, c;
        cin >> m >> c;
        
        if(m > c) misha_win ++;
        else if(m < c) chris_win ++;
    }
    
    if(misha_win > chris_win) cout << "Mishka" << '
';
    else if(misha_win == chris_win) cout << "Friendship is magic!^^" << '
';
    else cout << "Chris" << '
';
    
    return 0;
}