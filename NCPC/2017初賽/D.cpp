#include<bits/stdc++.h>
using namespace std;

#define xx first
#define yy second
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef vector<pii > vpii;
int m[8][8],ans[8][8];
pii start;
vpii inactive;

void paint_1(int x, int y)
{//XY_routing
    if(x < start.xx && y < start.yy)
    {
        for(int i = 0 ; i <= x ; i++)
            for(int j = 0 ; j <= y ; j++)
                m[j][i] = 1;
    }
    if(x > start.xx && y < start.yy)
    {
        for(int i = 7 ; i >= x ; i--)
            for(int j = 0 ; j <= y ; j++)
                m[j][i] = 1;
    }
    if(x > start.xx && y > start.yy)
    {
        for(int i = 7 ; i >= x ; i--)
            for(int j = 7 ; j >= y ; j--)
                m[j][i] = 1;
    }
    if(x < start.xx && y > start.yy)
    {
        for(int i = 0 ; i <= x ; i++)
            for(int j = 7 ; j >= y ; j--)
                m[j][i] = 1;
    }
}

void paint_3(int x, int y)
{//non-reachable
    if(y < start.yy)
    {
        for(int i = 0 ; i <= x ; i++)
            m[i][x] = 3;
    }
    if(y < start.yy)
    {
        for(int i = 0 ; i <= x ; i++)
            m[i][x] = 3;
    }
    if(y == start.yy)
    {
        if(x > 0 && x < start.xx)
        {
            for(int i = 0 ; i < 8 ; i++)
                m[i][x - 1] = 3;
        }
        else if(x < 8 && x > start.xx)
        {
            for(int i = 0 ; i < 8 ; i++)
                m[i][x + 1] = 3;
        }
        else
        {
            for(int i = 0 ; i < 8 ; i++)
            {
                if(i != y)
                    m[i][x] = 3;
            }
        }
    }
}


void sol()
{
    for(int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            if(m[i][j] == 2)
            {
                paint_1(i, j);
            }
        }
    }
    for(int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            if(m[i][j] == 2)
            {
                paint_3(i, j);
            }
        }
    }
    for(int i = 0 ; i < 8 ; i++)
        for(int j = 0 ; j < 8 ; j++)
            printf("%d", m[j][i]);
}

int main()
{
    string input;
    while(cin >> input)
    {
        if(input.size() == 1) break;
        for(int i=0;i<64;i++)
        {
            m[i/8][i%8]=input[i]-'0';
            if(m[i/8][i%8]==2)
            {
                m[i / 8][i % 8] = 4;
                start = mp(i % 8, i / 8);
            }
            else if(m[i / 8][i % 8] == 1)
            {
                m[i / 8][i % 8] = 2;
                inactive.pb(mp(i / 8, i % 8));
            }
        }
        sol();
    }
    return 0;
}
