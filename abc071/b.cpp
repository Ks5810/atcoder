#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n, k, res = 0;
  cin >> n >> k;
  vector<int> arr(n);

  for (int i = 0; i < n; ++i)
  {
     cin >> arr[i];
  }
  
  sort(arr.begin(), arr.end());
  
  for (int i = 0; i < k; ++i)
  {
     res += arr[i];
  }

  cout << res << "\n";
  return 0;
}