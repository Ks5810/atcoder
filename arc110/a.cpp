#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll gcd(ll a, ll b) 
{
    if (b == 0) 
        return a;
    return gcd(b, a % b);
}

ll lcm2(ll a, ll b) 
{
    ll d = gcd(a, b);
    return a / d * b;
}
 
ll lcm(const vector<ll> &vec) 
{
    ll l = vec[0];
    ll size = vec.size();
    for (ll i = 0; i < size - 1; i++)
        l = lcm2(l, vec[i + 1]);

    return l;
}
 
int main() 
{
    ll n;
    cin >> n;
 
    vector<ll> vec; 
    for(int i = 2; i <= n; i++)
        vec.push_back(i);
 
    cout << lcm(vec) + 1 << "\n";
    return 0;
}