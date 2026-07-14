#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int level = -1;
    for(int i=1; i<40; ++i)
    {
        if(i*(i+1)*(i+2) == n*6){
            level = i;
            break;
        }
        else if(i*(i+1)*(i+2) > n*6){
            level = i-1;
            break;
        }
    }
    
    cout << level << '
';
    
    return 0;
}