#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    ll res = 0;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {   
        if(!(i % 3 == 0) && !(i % 5 == 0)) res += i; 
    }

    cout << res << "\n";
    return 0;
}