#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll a;
    double b;
    cin >> a >> b;

    ll rb = round(b * 100);
    cout << (a * rb) / 100 << "\n";
    return 0;
}