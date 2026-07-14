#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin  >> n;
	vector<int> cards(n);
	for(auto &ele : cards){
	    cin >> ele;
	} 
	
	int left = 0, right = n - 1;
	int Sereja_sum = 0, Dema_sum = 0;
	bool turn = true;
    while(left <= right)
    {
        int card_turn = 0;
        if(cards[left] >= cards[right]){
            card_turn = cards[left];
            left ++;
        }
        else{
            card_turn = cards[right];
            right --;
        }
        
        if(turn) Sereja_sum += card_turn;
        else Dema_sum += card_turn;
        
        turn = !turn;
    }
    
    cout << Sereja_sum << " " << Dema_sum << endl;
    
    return 0;
}