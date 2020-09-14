#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1000000007;

ll powMod(ll x, ll n)
{
    ll res = 1;
    for(ll i = 0; i < n; i++)
    {
        res = res * x % mod;
    }
    
    return res;
}

int main()
{
    int n;
    cin >> n;

    ll res = powMod(10, n) - powMod(9, n) * 2 + powMod(8, n);
    res = (res % mod + mod) % mod;

    cout << res << "\n";
    return 0;
}