#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using dl = long double;
int mod = 1000000007; 


// TLE Answer O(n^(3/2))
ll divisors(ll n) 
{
    ll res = 0;
    for (ll i = 1ll; i <= n / i; ++i) 
    {
        if (n % i == 0)
        {
            res++;
            if (n / i != i) res ++;
        }
    }
    return res;
}

int Main()
{
    int n, res = 0;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        auto nc = divisors(n - i);
        res += nc;
    }
 
    cout <<  res << "\n";
    return 0;
}


// Correct Answer O(n)

// Since     C  = N - A * B,
// then      1 <= N - A * B
// and   A * B <= N - 1
// means     A <= (N - 1) / B    
int main()
{
    int n, res = 0;
    cin >> n;

    for(int i = 1; i <= n; ++i)
        res += (n - 1) / i;

    cout <<  res << "\n";
    return 0;
}