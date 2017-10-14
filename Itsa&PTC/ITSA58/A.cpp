#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(a,b) for(int i=a;i<b;i++)

int main()
{
    ll ncase, n, ans;
    cin >> ncase;
    while(ncase--)
    {
        ans = 0;
        cin >> n;
        rep(1, n + 1)
        {
            if(i %3 == 0)
                ans += i;
        }
        cout << ans << endl;
    }

    return 0;
}
