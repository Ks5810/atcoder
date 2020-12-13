#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int l;
    cin >> l;

    ll res = 1;
    for(int i = 1; i <= 11; ++i)
    {
        res *= l - i;
        res /= i;
    }   

    cout << res << "\n";
    return 0;
}