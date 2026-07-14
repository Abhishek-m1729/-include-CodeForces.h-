#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t --)
    {
        int h, m;
        cin >> h >> m;
        
        int remaining_min =(24 - h)*60 - m;
        cout << remaining_min << '
';
    }
    
    return 0;
}