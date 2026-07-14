#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> vec(n);
	for(auto &ele : vec) cin >> ele;
	
	int cont_uc = 0, cont_po = 0;
	  for(int i=0; i<n; ++i)
    {
        if(vec[i] == -1){
            if(cont_po > 0) cont_po --;
            else cont_uc ++;
        }
        else{
            cont_po += vec[i];
        }
    }
	
	cout << cont_uc << endl;
    return 0;
}