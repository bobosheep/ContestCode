#include <bits/stdc++.h>
using namespace std;

#define MAX 100009
int hp[MAX], n, t, cnt, temp;

int main(int argc, char **argv) {

  int odd, even;
  cin >> t;
  while(t--)  {
    odd = even = 0;
    cin >> n;
    for(int i = 0; i < n; i++)  {
      cin >> hp[i];
      if(hp[i] & 1)
        odd++;
      else
        even++;
    }

    if((odd+even)&1)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

  return 0;
}
