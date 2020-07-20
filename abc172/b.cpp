#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s, t;
    cin >> s >> t;
    int res = 0, size =  s.size();
    
    for(int i = 0; i < size; ++i)
    {
        if(s[i] != t[i]) res++;
    }
 
    cout << res << "\n";
}