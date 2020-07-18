#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, res = "No";
    cin >> a >> b;

    string ab = a.append(b);
    
    for(int i = 1; i <= 1000; ++i)
    {
        if(i * i == stoi(ab))
        {
            res = "Yes";
        }
    }
    
    cout << res << "\n";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int a, b, ab;
//     cin >> a >> b;
 
//     string res = "No";
 
//     if(b < 10)
//     {
//         ab = a * 10 + b;
//     } else if(b >= 100)
//     {
//         ab = a * 1000 + b;
//     } else 
//     {
//         ab = a * 100 + b;
//     }
 
//     for(int i = 1; i <= 1000; ++i)
//     {
//         if(i * i == ab)
//         {
//             res = "Yes";
//         }
//     }
    
//     cout << res << "\n";
//     return 0;
// }