#include<bits/stdc++.h>
using namespace std;

struct Star
{
    int x, y, s;
};

int n, q, c, ans;
int sky[105][105][15];

void init()
{
    memset(sky, 0, sizeof(sky));
    for(int i = 0 ; i < n ; i++)
    {
        struct Star s;
        scanf("%d%d%d", &s.x, &s.y, &s.s);
        for(int j = 0 ; j <= c ; j++)
            sky[s.x][s.y][j] += (s.s + j) % (c + 1);
    }
    for(int i = 1 ; i <= 100 ; i++)
    {
        for(int j = 1 ; j <= 100 ; j++ )
        {
            for(int k = 0 ; k <= c ; k++)
                sky[i][j][k] += sky[i - 1][j][k] + sky[i][j - 1][k] - sky[i - 1][j - 1][k];
        }
    }
}

void sol()
{
    for(int i = 0 ; i < q ; i++)
    {
        int t, x1, x2, y1, y2, moment;
        scanf("%d%d%d%d%d", &t, &x1, &y1, &x2, &y2);
        moment = t % (c + 1);
        ans = sky[x2][y2][moment] - sky[x1 - 1][y2][moment] - sky[x2][y1 - 1][moment] + sky[x1 - 1][y1 - 1][moment];
        printf("%d\n", ans);
    }

}

int main()
{
    cin >> n >> q >> c;
    init();
    sol();

    return 0;
}
