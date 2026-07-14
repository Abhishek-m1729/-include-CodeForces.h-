#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--)
	{
	     int k; cin >> k;
	     int SeqNum = 0;
	     for(int i=1; i<=1666; i++)
	     {
	         if(i%3 == 0 || i%10 == 3) continue;
	         else 
	         {
	             SeqNum ++;
	             if(SeqNum == k) 
	             {
	                cout << i << "
";
	                break;
	             }
	         }
	         
	     }
	}
	return 0;
}