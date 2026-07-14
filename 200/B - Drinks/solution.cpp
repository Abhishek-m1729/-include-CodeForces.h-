#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	vector<double> v(n);
	double sum = 0;
	for(int i=0;i<n;++i){
	    cin >> v[i];
	    sum += v[i];
	}
	
	cout << fixed << setprecision(12) << sum/n << "
";
	
	return 0;
}