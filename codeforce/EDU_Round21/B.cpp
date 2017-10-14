#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ans, k, n, a[200005];
    int i, j;
    cin >> n >> k ;
    ans = 0;
    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(i && i != n - 1)
            ans += a[i] * 2;
        else ans += a[i];
    }
    cout << ans / (n - k + 1) << endl;


    return 0;
}
