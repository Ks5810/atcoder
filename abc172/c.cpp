#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, m, k;
    int res = 0;
    cin >> n >> m >> k;

    vector<ll> a(n + 1, 0), b(m + 1, 0);
    
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for(int i = 1; i <= m; ++i)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }

    int j = m;
    for(int i = 0; i <= n; ++i)
    {
        if(a[i] > k) break; 
        while(a[i] + b[j] > k)
        {
            j--;
        }
        res = max(res, i + j);
    }

    cout << res << "\n";
    return 0;
}
