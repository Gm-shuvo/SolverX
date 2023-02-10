#include<bits/stdc++.h>
using namespace std;
void slove(){
  int x, a = 0, b = 0, k = 1;
  cin>>x;
  while(x > 0){
    if(k % 4 == 1 || k % 4 ==2 0){
      a += min(k, x);
    }
    else{
      b += min(k, x);
    }
    x -= k;
    k++;
  }
  cout << a << " " << b << endl;
}
int main(){
  int t,n;
  cin>>t;
  while(t--){
    slove();
  }

  return 0;
}