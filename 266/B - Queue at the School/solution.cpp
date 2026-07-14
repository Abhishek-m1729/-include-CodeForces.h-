#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, t;
	cin >> n >> t;
	
	string v;
	cin >> v;
	
	while(t--)
	{
	    for(int i=n;i>=1;--i){
	        if(v[i] > v[i-1]){
	            swap(v[i], v[i-1]);
	            i--;
	        }
	    }
	}
 
    cout << v << "
";
}