#include<bits/stdc++.h>
using namespace std;

#define rep(a, b) for(int i = a ; i < b ; i++)
#define pb push_back
#define xx first
#define yy second

typedef pair<int, int> pii;
typedef vector<pii > vpii;

const int MAX = 10005;

int npoint;
pii xline[MAX];
pii yline[MAX];
vpii point, ypoint;

void init()
{
    cin >> npoint;
    rep(0, npoint)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        point.pb({x, y});
        ypoint.pb({y, x});
    }
    sort(point.begin(), point.end());
    sort(ypoint.begin(), ypoint.end());
}

void sol()
{
    for(int i = 0 ; i < npoint ; i++)
    {

    }
}

int main()
{
    int ncase;
    cin >> ncase;
    while(ncase--)
    {

        init();
        sol();
    }

    return 0;
}
