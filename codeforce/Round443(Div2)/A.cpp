#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, cnt, ans;
ll doc[10005][5];

void init()
{
    cnt= ans = 0;
    memset(doc, 0, sizeof(doc));
    for(int i = 0 ; i < n ; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        for(int j = 0 ;; j++)
        {
            if(a + b * j > ans)
            {
                ans = a + b * j;
                break;
            }
        }
    }
    cout << ans  << endl;
}
/*
void sol()
{
    for(int i = 0 ; i < 10005; i++)
    {
        if(cnt == n)
            break;
        if(doc[i])
        {
            cnt++;
            ans = i;
        }
    }
    cout << ans << endl;
}
*/
int main()
{
    while(cin >> n)
    {
        init();
        //sol();
    }
    return 0;
}
