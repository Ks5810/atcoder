#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = int (s.size());

    bool res = true;

    for(int i = 0; i < n; ++i)
    {
        if((i + 1) % 2 == 0 && s[i] == 'R')
            res = false;
        if((i + 1) % 2 != 0 && s[i] == 'L')
            res = false;
    }

    cout << (res ? "Yes" : "No") << "\n";
    return 0;
}
