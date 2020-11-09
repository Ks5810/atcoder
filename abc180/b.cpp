#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int n;
    cin >> n;

    vector<ll> x(n);
    for(int i = 0; i < n; ++i) cin >> x[i];

    ll a = 0, b = 0, c = 0;
    for(int i = 0; i < n; ++i) a += abs(x[i]);
    for(int i = 0; i < n; ++i) b += abs(x[i]) * abs(x[i]);
    for(int i = 0; i < n; ++i) c = max(c, abs(x[i]));

    cout << a << "\n" << setprecision(15) << fixed << (double (sqrt(b))) << "\n" << c << "\n";
    return 0;
}