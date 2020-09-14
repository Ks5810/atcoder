#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll a, b, c, d, res = LONG_MIN;
    cin >> a >> b >> c >> d;

    res = max(max(a * c, b * d), max(b * c, a * d));

    cout << res << "\n";
    return 0;
}