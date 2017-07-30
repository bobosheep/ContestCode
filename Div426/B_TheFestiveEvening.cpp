#include<bits/stdc++.h>
using namespace std;

struct g
{
    int l;
    int r;
} guard[30];

bool open[30];
int n, k;
string s;

void init()
{
    cin >> n >> k >> s;
    for(int i = 0 ; i < 30 ; i++)
        guard[i].l = 1000005, guard[i].r = -1;

    for(int i = 0 ; i < s.size() ; i++)
    {
        int cur = s[i] - 'A';
        if(guard[cur].l > i)
            guard[cur].l = i;
        if(guard[cur].r < i)
            guard[cur].r = i;
    }
}

void sol()
{
    bool ans(true);
    for(int i = 0 ; i < s.size() ; i++)
    {
        int cur = s[i] - 'A';
        if(i == guard[cur].l)
        {
            k--;
        }
        if(k < 0 )
            ans = false;
        if(i == guard[cur].r)
        {
            k++;
        }

    }
    if(ans)
        cout << "NO";
    else cout << "YES";
}

int main()
{
    init();
    sol();
    return 0;
}
