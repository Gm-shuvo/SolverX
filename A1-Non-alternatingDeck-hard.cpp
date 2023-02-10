#include <bits/stdc++.h>
using namespace std;
void slove()
{
  int x, w1 = 0, b1 = 0, w2 = 0, b2 = 0, k = 1;
  cin >> x;
  
  while (x > 0)
  {
    if (k % 4 == 1 || k % 4 == 0)
    {
      int tmp1 = min(k, x);
      w1 += tmp1 / 2;
      b1 += tmp1 / 2;
      if(tmp1 % 2 != 0)
        w1 += 1;
    }
    else
    {
      int tmp2 = min(k, x);
      w2 += tmp2 / 2;
      b2 += tmp2 / 2;
      if (tmp2 % 2 != 0)
        b2 += 1;
    }
    x -= k;
    //cout << x << endl;
    k++;
  }
  cout << w1 << " " << b1 <<" "<< w2 << " " << b2 << endl;
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