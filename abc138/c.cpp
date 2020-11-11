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

    double res = a[0];
    for(int i = 1; i < n; ++i)
        res = (res + a[i]) / 2;

    cout << res << "\n";
    return 0;
}