#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    
    vector <int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    
    int kth = vec[k-1];
    int count = 0;
    
    for(int v : vec){
        if(v >= kth && v != 0)
            count ++;
    }
 
    cout << count << endl;
    return 0;
}