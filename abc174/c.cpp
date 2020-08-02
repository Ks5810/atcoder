#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll k;
    cin >> k;

    ll j = 7;
    for(ll i = 1; i <= k; ++i)
    {
        if(j % k == 0)
        {
            cout << i << "\n";
            return 0;
        }
        j = (j * 10 + 7) % k;
    }
    
    cout << -1 << "\n";
    return 0;
}