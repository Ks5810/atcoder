#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, d, res = 0;
    cin >> n >> d;

    for(int i = 0; i < n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        if(x * x + y * y <= d * d)
            res++;
    }
    cout << res << "\n";
    return 0;
}