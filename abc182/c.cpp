#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;

    int size = s.size();
    int res = 18;

    for(int bit = 1; bit < 1 << size; ++bit)
    {
        int sum = 0;
        int cnt = 0;

        for(int j = 0; j < size; ++j)
        {
            if(bit & (1 << j))
                sum += s[j] - '0';
            else cnt++;
        }
        if(sum % 3 == 0)
            res = min(res, cnt);
    }

    cout << (res == 18 ? -1 : res) << "\n";
    return 0;
}