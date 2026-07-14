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
    vector<int> coin(n);
    for (auto &ele : coin)
        cin >> ele;
 
    sort(coin.rbegin(), coin.rend());
 
    int total = accumulate(coin.begin(), coin.end(), 0);
    int mySum = 0, cont = 0;
 
    for (auto c : coin)
    {
        mySum += c;
        cont++;
        if (mySum > total - mySum)
            break;
    }
 
    cout << cont << endl;
    return 0;
}