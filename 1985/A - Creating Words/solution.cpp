#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
	while(t --)
	{
	    string word1, word2;
	    cin >> word1 >> word2;
	    
	    swap(word1[0], word2[0]);
	    
	    cout << word1 << " " << word2 << '
';
	}
	
    return 0;
}