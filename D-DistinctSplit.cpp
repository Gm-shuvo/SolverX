#include <bits/stdc++.h>
using namespace std;

void slove()
{
  int n;
  cin>>n;
  string s;
  cin >> s;
  int ans = INT_MIN;
  set<int>p;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    p.insert(s[i]);
    v[i] = p.size();
  }
  p.clear();
  // for(auto& x: v)
  //   cout << x << endl;
  for (int i = n - 1; i >= 1; i--){
    p.insert(s[i]);
    int sz = p.size();
    ans = max(ans, sz + v[i - 1]);
  }
  cout << ans << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    slove();
  }
  return 0;
}