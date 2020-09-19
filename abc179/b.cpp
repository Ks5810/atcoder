#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> d1(n), d2(n);

    for(int i = 0; i < n; ++i)
        cin >> d1[i] >> d2[i];

    bool res = false;
    for(int i = 0; i < n - 2; ++i)
    {
        if(d1[i] == d2[i] && d1[i + 1] == d2[i + 1] && d1[i + 2] == d2[i + 2])
            res = true;
    }

    cout << (res ? "Yes" : "No") << "\n";
    return 0;
}
