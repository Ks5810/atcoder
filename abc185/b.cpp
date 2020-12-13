#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    ll n, m, t, tmp;
    cin >> n >> m >> t;

    vector<int> a(m), b(m);
    for(int i = 0; i < m; ++i)
    {
        cin >> tmp;
        a[i] = tmp;
        cin >> tmp;
        b[i] = tmp;
    }

    ll j = 0, i = 0;

    ll mx = n;
    while(i < t)
    {
        if(a[j] != i)
            n -= 1;
        else 
        {
            int cur = a[j];
            while(cur < b[j])
            {
                if(n < mx)
                    ++n;
                i++;
                cur++;
            }
            j++;
            continue;
        }
        if(n <= 0)
        {
            cout << "No\n";
            return 0;
        }
        ++i;
    }
    cout << "Yes\n";
    return 0;
}