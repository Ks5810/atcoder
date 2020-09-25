#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int cnt = 1, res = 0;
    while(cnt < b)
    {
        cnt--;
        cnt += a;
        res++;
    }

    cout << res << "\n";
    return 0;
}
