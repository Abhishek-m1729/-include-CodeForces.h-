#include<iostream>
#include<vector>
using namespace std;
 
void Num(long long n){
    vector<long long> num;
    while(n > 0){
        long long ld = n % 10;
        n /= 10;
        if(ld > 9 - ld ) ld = 9 - ld;
        else ld = ld;
        num.push_back(ld);
    }
 
    for(int i=num.size()-1; i>=0; i--){
        if(num[num.size()-1] == 0) num[num.size()-1] = 9;
        cout << num[i]; 
    }
    cout << "
";
}
 
int main(){
  
    long long n;
    cin >> n;
 
    if(n == 9){
        cout << "9";
    }else{
        Num(n);
    }
    
    return 0;
}