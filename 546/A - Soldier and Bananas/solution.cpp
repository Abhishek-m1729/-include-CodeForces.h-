#include <iostream>
using namespace std;
 
int main() {
    int k, n, w;
    cin >> k >> n >> w;
 
    int td = (w*(w+1)/2)*k;
 
    if(n > td){
        cout << "0" << endl;
    }
    else{
        cout << td-n << endl;
    }
    return 0;
}