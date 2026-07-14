#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    double a, b;
    cin >> a >> b;
    
    double n = fabs(log10(b/a) / log10(1.5));
    
    if(floor(n) == n) cout << (int)n + 1 << endl;
    else cout << ceil(n) << endl;
    
    return 0;
}