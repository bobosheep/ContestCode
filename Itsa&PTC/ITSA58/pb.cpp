#include <bits/stdc++.h>
using namespace std;


int n, m, a, b, ret;
bool arr[10009];


int road()
{
  ret = 0;
  for(int i = 0; i < 10009; i++)
    arr[i] = false;

  scanf("%d", &m);

  for(int i = 0; i < m; i++)
  {
    scanf("%d%d", &a, &b);

    for(int j = a; j < b; j++)
    {
      arr[j] = true;
      //printf("a: %d b: %d",a, b);
    }

  }

  for(int i = 0; i < 10009; i++)
    if(arr[i])
      ret++;

  //for(int i = 0; i < 20; i++)
    //printf("%d, ", arr[i]);
  //printf("\n");

  return ret;
}


int main()
{
  scanf("%d", &n);
  while(n--)
  {
    printf("%d\n", road());
  }

  return 0;
}
