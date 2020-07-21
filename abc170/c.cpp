#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x, n, tmp;
    cin >> x >> n;
    vector<int> v(101, 0);

    for(int i = 0; i < n; ++i)
    {
        cin >> tmp;
        v[tmp]++;
    }

    pair<int, int> res(102, -1);
    for(int i = 0; i <= 101; ++i)
    {
        if(v[i] == 0)
        {
            res = min(res, pair<int, int>(abs(x - i), i));
        }
    }

    cout << res.second << "\n";
    return 0;
}