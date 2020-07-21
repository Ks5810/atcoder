#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    bool yes = false;
    cin >> x >> y;

    for(int i = 0; i <= x; ++i)
    {
        if(2 * i + 4 * (x - i) == y)
        {
            yes = true;
        }
    }

    cout << (yes ? "Yes" : "No") << "\n";
    return 0;
}