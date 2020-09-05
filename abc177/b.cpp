#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;

    int res = INT_MAX;
    cin >> s >> t;

    for(int i = 0; i <= s.size() - t.size(); ++i)
    {
        int cnt = 0;
        for(int j = i; j < i + t.size(); ++j)
        {
            // cout << "s[j]: " << s[j] << "\t  s[j - i]: " << t[j - i] << endl;
            if(s[j] != t[j - i])
                cnt++;

        }
        // cout << "\n";
        res = min(cnt, res);
    }
    cout << res << "\n";
}
