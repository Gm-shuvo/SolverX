#include <bits/stdc++.h>
using namespace std;
int uniqueNum(string s){
  set<char> ch;
  for(auto& c: s)
    ch.insert(c);
  return ch.size();
}
void slove()
{
  int n;
  cin>>n;
  string s;
  cin >> s;
  int ans = INT_MIN;
  for (int i = 1; i < n; i++)
  {
    string str1 = s.substr(0, i);
    string str2 = s.substr(i, n);
    // cout << str1 << " " << str2 << endl;
    // cout << uniqueNum(str1) << endl;
    ans = max(ans, uniqueNum(str1) + uniqueNum(str2));
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