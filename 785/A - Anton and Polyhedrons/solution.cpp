#include <iostream>
#include <string>
#include <map>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    map <string, int> m = {
        {"Cube", 6},
        {"Icosahedron", 20},
        {"Tetrahedron", 4},
        {"Dodecahedron", 12},
        {"Octahedron", 8}
    };
 
    int ans = 0;
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        ans += m[str];
    }
 
    cout << ans << endl;
 
    return 0;
}