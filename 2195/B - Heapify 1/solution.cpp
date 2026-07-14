#include <iostream>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        int flag = 0;
 
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
 
            while (a % 2 == 0)
                a /= 2;
 
            int index = i;
            while (index % 2 == 0)
                index /= 2;
 
            if (a != index)
                flag = 1;
        }
 
        if (flag == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}