#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string name;
	cin >> name;
	
	int min_dis = min(name[0] - 'a', 26 - name[0] + 'a');
	
	for(int i=0; i<name.size()-1; ++i){
	    int diff = abs(name[i] - name[i+1]);
	    min_dis += min(diff, 26 - diff);
	}
	
	cout << min_dis << '
';
	
	return 0;
}