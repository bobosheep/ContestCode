#include <stdio.h>

int main()
{
    double ans, a[200005], dp[200005];
    int i, j, n, k;
    scanf("%d%d", &n, &k);
    ans = 0;
    for(i = 0 ; i < 200005 ; i++)
        dp[i] = 0;
    for(i = 0 ; i < n ; i++)
    {
        scanf("%lf", a + i);
        if(i)
            dp[i] = dp[i - 1] + a[i];
        else dp[i] = a[i];
        if(i >= k)
            ans += dp[i] - dp[i - k];
        else if(i == k - 1)
            ans += dp[i];
    }
    printf("%.7lf\n", ans /(double) (n - k + 1));

    return 0;
}
