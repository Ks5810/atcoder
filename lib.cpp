// Library for atcoder
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using dl = long double;
int mod = 1000000007;

// constants

const int dx[4] = { 1, 0,-1, 0};
const int dy[4] = { 0, 1, 0,-1};


// numbers

bool isPrime(ll n) 
{
    if (n <= 1) 
        return false;

    for (ll i = 2; i * i <= n; ++i) 
    {
        if (n % i == 0) 
            return false;
    }
    return true;
}


map<ll, ll> primeFactorize(ll n)
{
    map<ll, ll> res;
    for (ll i = 2; i * i <= n; ++i) 
    {
        while (n % i == 0) 
        {
            res[i]++;
            n /= i;
        }
    }
    if (n != 1) res[n] = 1;
    return res;
}


vector<ll> divisors(ll n) 
{
    vector<ll> res;
    for (ll i = 1l; i * i <= n; ++i) 
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (n / i != i) res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}


ll gcd(ll a, ll b)
{
    if(a % b == 0)
        return b;
    
    return gcd(b, a % b);
}


ll lcm(ll a, ll b)  
{  
     return (a * b) / gcd(a, b);  
}  


ll powMod(ll x, ll n)
{
    ll res = 1;
    for(ll i = 0; i < n; i++)
        res = res * x % mod;

    return res;
}


ll digitSum(ll n)
{
    if(n < 10) 
        return n;
    
    return digitSum(n / 10) + n % 10;
}


// strings

bool isPalindrome(string s)
{
    string t(s.rbegin(), s.rend());
    return s == t;
}


// utils

string paddingRight(string s, int width, char fill) 
{
    ostringstream oss;
    oss << setw(width) << setfill(fill) << s;
    return oss.str();
}



string paddingLeft(string s, int width, char fill) 
{
    ostringstream oss;
    oss << left << setw(width) << setfill(fill) << s;
    return oss.str();
}