#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m;

void s(int x, int y)
{
    if(y == 1 || y == x) return 1;
    return y * s(x - 1, y) + s(x - 1, y - 1);
}

void init()
{

}

int main()
{
    ll ncase;
    char c;
    cin >> ncase;
    while(ncase--)
    {
        cin >> n >> c >> m;
        init();
        sol();
    }


    return 0;
}
