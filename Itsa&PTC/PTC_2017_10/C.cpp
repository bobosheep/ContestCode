#include<bits/stdc++.h>
using namespace std;

#define rep(a,b) for(int i=a; i< b ; i++)
#define pb push_back
#define xx first
#define yy second
typedef pair<int, int> pii;
typedef vector<pii> vpii;

bool ans;
int hotel[5];
vpii guest;
int nguest;

void f(int x)
{
    int like1, like2;
    like1 = guest[x].xx;
    like2 = guest[x].yy;
    if(x == nguest - 1 && (hotel[like1] || hotel[like2]))
    {
        ans = true;
        return;
    }
    if(hotel[like1] > 0)
    {
        hotel[like1]--;
        f(x + 1);
        hotel[like1]++;
    }
    if(hotel[like2] > 0)
    {
        hotel[like2]--;
        f(x + 1);
        hotel[like2]++;
    }

}

void init()
{
    guest.clear();
    ans = false;
    rep(0, 5)
        scanf("%d", &hotel[i]);
    cin >> nguest;
    rep(0, nguest)
    {
        string a, b;
        int aa, bb;
        cin >> a >> b;
        aa = a[0] - 'A';
        bb = b[0] - 'A';
        guest.pb({aa, bb});
    }
}

void sol()
{
    f(0);
    if(ans) cout << "YES\n";
    else cout << "NO\n";
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
