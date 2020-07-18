#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, tmp;
    cin >> n;
    vector<int> res(n + 1);
    
    for(int x = 1; x <= sqrt(n); ++x)
    {
        for(int y = 1; y <= sqrt(n); ++y)
        {
            for(int z = 1; z <= sqrt(n); ++z)
            {
                tmp = x * x + y * y + z * z + x * y + y * z + z * x;
                // tmp must be smaller than n
                if(tmp <= n)
                {
                    res[tmp]++;
                }
            }
        }
    }
    
    // print the result
    for(int i = 1; i <= n; ++i)
    {
        cout << res[i] << "\n";
    }
    
    return 0;
}