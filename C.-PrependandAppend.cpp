#include <bits/stdc++.h>
using namespace std;
int slove(){
  int n, ans;
  cin>>n;
  string s;
  cin>>s;
  ans = n;
  for (int i = 0; i < n/2; i++)
  {
    if(s[i] == s[n - i - 1]){
      return ans;
    }
    ans -= 2;
  }
  return ans;
}

int main(){
  int t;
  cin >> t;
  while (t--)
  {
    cout<<slove()<<endl;
  }
  return 0;
}