#include<stdio.h>

int main()
{
    int n;
    double a;
    int i;
    double min = 1001, max = -1001;
    scanf("%d", &n);
    while(n--)
    {
        min = 1001;
        max = -1001;
        for(i = 0 ; i < 10 ; i++)
        {
            scanf("%lf", &a);
            if(a > max)max = a;
            if(a < min)min = a;
         }
         printf("maximum:%.2lf\nminimum:%.2lf\n", max, min);

    }

    return 0;
}

