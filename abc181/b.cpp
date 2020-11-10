#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int n;
    cin >> n;

    ll a, b, c, res = 0;
    for(ll i = 0; i < n; ++i)
    {
        cin >> a >> b;
        c = b - a;
        res += a * (c + 1) + c * (c + 1) / 2;
    }

    cout << res << "\n";
    return 0;
}