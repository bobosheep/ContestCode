#include<bits/stdc++.h>
using namespace std;

typedef long long lld;

lld T, m, k;
vector<lld> price;
lld ans;

void init()
{
    ans = 0;
    cin >> T >> m >> k;
    price.clear();
    for(int i =0 ; i < k ; i++)
    {
        lld tmp;
        scanf("%lld", &tmp);
        price.push_back(tmp);
    }
    sort(price.begin(), price.end());
}

void sol()
{
    for(int i = 0 ; i < m ; i++)
    {
        if(T < 0)
        {
            break;
        }
        ans += price[i];
        T -= price[i];
    }
    if(T < 0) cout << "Impossible\n";
    else cout << ans << endl;
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
