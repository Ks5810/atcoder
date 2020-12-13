#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int tmp, m = INT_MAX;
   for(int i = 0; i < 4; ++i)
   {
       cin >> tmp;
       m = min(m, tmp);
   }

   cout << m << endl;
   return 0;
}
