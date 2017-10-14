#include<bits/stdc++.h>
using namespace std;

#define MAX 1005

int q, n;
int store[MAX][MAX];


void init()
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d", &store[i][j]);
        }
    }

}

void sol()
{
    for(int k = 0 ; k < n ; k++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                store[i][j] = min(store[i][j], store[i][k] + store[k][j]);
            }
        }
    }
    for(int i = 0 ; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << store[x][y] << endl;
    }

}

int main()
{
    while(cin >> q)
    {
        cin >> n;
        init();
        sol();
    }

    return 0;
}
