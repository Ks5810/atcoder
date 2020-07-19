#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    int size = s.size();
    set<string> m;

    for(int i = 0; i < size; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            m.insert(s.substr(i, j));
        }
    }

    int cnt = 1;
    for(auto i: m)
    {
        if(cnt == k)
            cout << i << "\n";
        cnt++;
    }
    return 0;
}