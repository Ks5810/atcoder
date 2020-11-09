#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    set<ll> set;
    for (ll i = 1; i * i <= n; ++i) 
    {
        if(n % i == 0)
        {
            set.insert(i);
            set.insert(n/i);
        }
    }

    for(auto i: set)
        cout << i << "\n";
    return 0;
}