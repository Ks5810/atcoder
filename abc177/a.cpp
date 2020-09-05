#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, t, s;
    cin >> d >> t >> s;

    cout << (double (double(d) / s) <= t ? "Yes" : "No") << "\n";
    return 0;
}