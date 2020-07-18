#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, k;
    int res = 0;
    cin >> h >> w >> k;
    vector<vector<char>> v(h, vector<char>(w));
    
    for(int i = 0; i < h; ++i)
    {
        for(int j = 0; j < w; ++j)
        {
            cin >> v[i][j];
        }
    }
    
    // iterate for all subset of rows h{0, 1, ..., h-1}
    for(int br = 0; br < (1 << h); ++br)
    {
        // iterate for all subset of columns w{0, 1, ..., w-1}
        for(int bc = 0; bc < (1 << w); ++ bc)
        {
            int black_count = 0;
            
            // check each grid if the row and column is not painted red AND
            // the grid is black
            for(int i = 0; i < h; ++i)
            {
                for(int j = 0; j < w; ++j)
                {
                    // v[i][j] is not red and the grid is black
                    if(!(br & (1 << i)) && !(bc & (1 << j)) && v[i][j] == '#')
                    {
                        black_count++;
                    }
                }
            }
            if(black_count == k)
            {
                res++;
            }
        }
    }
    
    cout << res << "\n";
    
    return 0;
}
