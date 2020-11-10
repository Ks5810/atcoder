#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for(int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];
    
    for(int i = 0; i < n - 2; ++i)
        for(int j = i + 1; j < n - 1; ++j)
            for(int k = j + 1; k < n; ++k)
            {
                int dx = -x[i];
                int dy = -y[i];
                int bx = x[j] + dx;
                int by = y[j] + dy;
                int cx = x[k] + dx;
                int cy = y[k] + dy;

                if(bx * cy == cx * by)
                {
                    cout << "Yes\n";
                    return 0;
                }
            }

    cout << "No\n";

    return 0;
}