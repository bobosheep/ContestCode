#include <bits/stdc++.h>
using namespace std;

int t, n, x1, x2, d1, d2, ans, ii(-1), jj(-1);


int main(int argc, char **argv) {

  cin >> t;
  while(t--)  {
    ans = INT_MAX;
    cin >> n >> x1 >> d1 >> x2 >> d2;
    ii = jj = -1;
    for(int i = n/x1; i >= 0; i--)  {
      if((n - (i*x1)) % x2 == 0)  {
        if(ans > ((i*d1) + ((n-(i*x1))/x2)*d2)) {
          ii = i; jj = (n-(i*x1))/x2;
          ans = ((i*d1)+ ((n-(i*x1))/x2)*d2);
        }
      }
    }
    if(ii == -1 and jj == -1)
      cout << "false" << endl;
    else
      cout << ii << " " << jj << endl;
  }
  return 0;
}
