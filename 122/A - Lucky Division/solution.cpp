#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	
	vector<int> Lucky_Num = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
	
	bool found = false;
	for(int ele : Lucky_Num){
	    if(n % ele == 0){
	        found = true;
	        break;
	    }
	    else if(n == ele){
	        found = true;
	        break;
	    }
	}
	
    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
	
    return 0;
}