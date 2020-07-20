#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
   ll n;
   string res;
   cin >> n;

   while(n)
   {
       res += char(--n % 26 + 'a');
       n /= 26;
   }

   reverse(res.begin(), res.end());

   cout << res << "\n";
   return 0;
}