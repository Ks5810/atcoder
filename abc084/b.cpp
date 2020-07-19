#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string s;
    bool res = true;
    cin >> a >> b >> s;

    for(int i = 0; i < s.size(); ++i)
    {
        if(i < a && !isdigit(s[i]))
        {
            res = false;
        }
        if(i == a && s[i] != '-')
        {
            res = false;
        }
        if(i > a + 1 && !isdigit(s[i]))
        {
            res = false;
        }
    }

    cout << (res ? "Yes" : "No") << "\n";
    return 0;
}
