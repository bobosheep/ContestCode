#include<bits/stdc++.h>
using namespace std;

#define rep(a,b) for(int i = a;i<b;i++)
#define pb push_back
typedef long long lld;

lld ncase, n;
vector<lld> pos, neg;
lld ans;

void init()
{
    ans = 0;
    cin >> n;
    pos.clear();
    neg.clear();
    rep(0, n)
    {
        lld tmp;
        scanf("%lld", &tmp);
        if(tmp > 0)
            pos.pb(tmp);
        else neg.pb(tmp);
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());
}

void sol()
{
    int ps(pos.size()), ns(neg.size());
    //cout << ps << " " << ns << endl;
    if(ps >= 3)
    {
        ans = pos[ps - 1] * pos[ps - 2] * pos[ps - 3];
        if(ns >= 2)
            ans = max(ans , pos[ps - 1] * neg[1] * neg[0]);
    }
    else
    {
        if(ps != 0)
        {
            if(ps == 2 && ns == 1)
                ans = pos[ps - 1] * pos[ps - 2] * neg[ns - 1];
            else
            {
                ans = pos[ps - 1];
                ans *= neg[0] * neg[1];
            }
        }
        else ans = neg[ns - 1] * neg[ns - 2] * neg[ns - 3];
    }
    cout << ans;
}

int main()
{

    cin >> ncase;
    while(ncase--)
    {
        init();
        sol();
        if(ncase) cout << endl;
    }

    return 0;
}


