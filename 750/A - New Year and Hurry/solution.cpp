#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n, k;
	cin >> n >> k;
	
	int Time_to_solve_prob = 240 - k;
	int No_Prob = 0;
	int Time_sum = 0;
	for(int i=1; i<=n; ++i){
	    Time_sum += i*5;
	    if(Time_sum <= Time_to_solve_prob) No_Prob ++;
	    else break;
	}
 
    cout << No_Prob << endl;
    
    return 0;
}