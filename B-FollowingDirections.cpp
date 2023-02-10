#include<bits/stdc++.h>
using namespace std;
void slove(){
  int n, c = 0, r = 0;
  string s;
  cin>>n;
  cin>>s;
  for (int i = 0; i < n; i++){
    if(s[i] == 'U')
      c++;
    else if(s[i] == 'D')
      c--;
    else if(s[i] == 'R')
      r++;
    else
      r--;
    //cout << c << " " << endl;
    if (r == 1 && c == 1)
    {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    slove();
  }
  return 0;
}