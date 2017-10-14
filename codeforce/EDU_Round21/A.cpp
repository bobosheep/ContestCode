#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cur, tmp, ans;
    cin >> cur;
    if(cur <= 9 && cur >= 0)
    {
        cout << 1 << endl;
        return 0;
    }
    tmp = cur;
    ans = 1;
    while(1)
    {
        tmp /= 10;
        if(tmp == 0 )
            break;
        ans *= 10;
    }
    ans -= cur % ans;
    cout << ans << endl;

    return 0;
}
