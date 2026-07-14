#include<iostream>
using namespace std;
 
int main(){
    long long n, m, a;
    cin >> n >> m >> a;
 
    long long flag1 = (n + a - 1) / a;
    long long flag2 = (m + a - 1) / a;
 
    cout << flag1 * flag2 << endl;
    return 0;
}