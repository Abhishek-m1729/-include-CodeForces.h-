#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	vector<int> frd(n), taxis(5, 0);
	for(auto &ele : frd)
	{
	    cin >> ele;
	    taxis[ele] ++;
	}
 
    int Ttaxis = taxis[4];
    Ttaxis += taxis[3];
    taxis[1] -= min(taxis[1], taxis[3]);
    
    Ttaxis += taxis[2] / 2;
    if(taxis[2] % 2)
    {
        Ttaxis ++;
        taxis[1] = max(0, taxis[1] - 2);
    }
    
    Ttaxis += (taxis[1] + 4 - 1) / 4;
    cout << Ttaxis << '
';
    
    return 0;
}