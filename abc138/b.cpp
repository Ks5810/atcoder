#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    double res = 0;
    for(int i = 0; i < n; ++i)
        res += double (1.0 / a[i]);

    res = double (1.0 / res);

    cout << setprecision(15) << fixed << res << "\n";
    return 0;
}