#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, a[105], cup[105];
    int i, j;
    bool ans;
    cin >> n >> w;
    ans = true;
    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        cup[i] = a[i] / 2;
        if(a[i] & 1)
        {
            w = w - (cup[i] + 1);
            cup[i]++;
        }
        else w = w - cup[i];

        if(w < 0)
            ans = false;
    }
    if(w > 0)
    {
        for(j = 100 ; j >= 0 ; j--)
        {
            if(w <= 0) break;
            for(i = 0 ; i < n ; i++)
            {
                if(a[i] == j)
                {
                    if(w < a[i] - cup[i])
                    {
                        cup[i] += w;
                        w = 0;
                    }
                    else
                    {
                        w = w - (a[i] - cup[i]);
                        cup[i] += a[i] - cup[i];
                    }
                    if(w <= 0)
                        break;
                }
            }
        }
    }
    if(ans)
    {
        for(i = 0 ; i < n ; i++)
        {
            cout << cup[i] << " ";
        }
        cout << endl;
    }
    else cout << "-1\n" ;
    return 0;
}
