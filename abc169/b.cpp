#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX = 1000000000000000000;

int main()
{
    int n;
    ll tmp, res = 1;
    cin >> n;
    bool ng = false;

    for(int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if(tmp == 0)
        {
            cout << 0 << "\n";
            return 0;
        }
        if(ng || tmp > MAX / res)
        {
            ng = true;
        }
        res *= tmp;
    }

    cout << (ng ? -1 : res) << "\n";
    return 0;
}