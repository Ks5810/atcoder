#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, m, k;
    int res = 0;
    cin >> n >> m >> k;

    vector<ll> a(n, 0), b(m, 0);
    
    cin >> a[0];
    for(int i = 1; i < n; ++i)
    {
        cin >> a[i];
        a[i] = a[i] + a[i - 1];
    }

    cin >> b[0];
    for(int i = 1; i < m; ++i)
    {
        cin >> b[i];
        b[i] = b[i] + b[i - 1];
    }

    int j = m - 1;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] > k) break; 
        while(b[j] > k - a[i])
        {
            j--;
        }
        res = max(res, i + j + 2);
    }

    cout << res << "\n";
    return 0;
}
