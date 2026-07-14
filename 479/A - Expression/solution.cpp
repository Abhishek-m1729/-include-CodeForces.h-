#include <iostream>
using namespace std;
 
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    
    int sum = x + y + z;
    int prod = x * y *z;
    int Tlsum = (x + y) * z;
    int Trsum = x * (y + z);
    
    cout << max(max(sum, prod), max(Tlsum, Trsum)) << "
";
    return 0;
}