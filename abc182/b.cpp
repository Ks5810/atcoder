#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    int res, cnt = 0;
    for(int k = 2; k <= 1000; ++k)
    {
        int tmp = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] % k == 0)
                tmp++;
        }
        if(tmp > cnt)
        {
            cnt = tmp;
            res = k;
        }
    }

    cout << res << "\n";
    return 0;
}