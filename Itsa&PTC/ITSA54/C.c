#include<stdio.h>

int main()
{
    int n;
    double t, ans;
    int nt, i;
    char c;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lf%c%d", &t, &c, &nt);
        ans = t;
        for(i = 1 ; i <= nt ; i++)
            ans += i * 2.71828;
        printf("%.4lf\n", ans);

    }
    return 0;
}
