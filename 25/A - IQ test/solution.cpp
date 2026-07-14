#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];
 
    int Even = 0, Odd = 0;
    for (int i = 0; i < n; ++i)
    {
        if (vec[i] % 2 == 0)
            Even++;
        else
            Odd++;
    }
 
    int Index = -1;
    if (Even == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            if (vec[i] % 2 == 0)
            {
                Index = i;
                break;
            }
        }
    }
    else if (Odd == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            if (vec[i] % 2 != 0)
            {
                Index = i;
                break;
            }
        }
    }
 
    cout << Index+1 << "
";
    return 0;
}