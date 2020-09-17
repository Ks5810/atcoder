#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k, m, sum = 0, tmp;
    cin >> n >> k >> m;

    for(int  i = 0; i < n - 1; ++i)
    {
        cin >> tmp;
        sum += tmp;
    }

    int x = m * n > sum ? m * n - sum : 0;
    cout << (x <= k ? x : -1) << "\n";
    return 0;
}