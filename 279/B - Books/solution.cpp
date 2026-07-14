#include <bits/stdc++.h>
using namespace std;
 
long long Count_Book(vector<int> &tm, long long t, long long n)
{
    long long sum = 0, cont = 0;
    int j=0;
    for(int i=0; i<n; ++i)
    {
        sum += tm[i];
        while(sum > t){
            sum -= tm[j];
            j ++;
        }
        
        cont = max(cont, (long long)(i-j+1));
    }
    
    return cont;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	long long n, t;
	cin >> n >> t;
	
	vector<int> reading_time(n);
	for(auto &tm : reading_time) cin >> tm;
	
    cout << Count_Book(reading_time, t, n) << '
';
    
    return 0;
}