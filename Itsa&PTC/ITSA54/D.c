#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, row, count, col, val, i, j, k, len, s;
    int a[15][15], b[15][15], ans[105][105];
    char c[105], *tmp = NULL, *tmp1;
    scanf("%d", &n);
    while(n--)
    {
        for(i = 0 ; i < 15 ; i++)
            for(j = 0 ; j < 15 ; j++)
                a[i][j] = b[i][j] = ans[i][j] = 0;
        scanf("%d%d", &len, &s);
        getchar();
        while(s--)
        {
            count = 0;
            fgets(c, 105, stdin);
            tmp = strtok(c, "()+:=\n \0");
            while(tmp != NULL)
            {
                tmp1 = strdup(tmp);
                if(count == 0)
                    row = (int)atoi(tmp1);
                else if(count == 1)
                    col = (int)atoi(tmp1);
                else val = (int)atoi(tmp1);
                count++;
                tmp = strtok(NULL, "()+:=\n \0");
            }
            a[row][col] = b[col][row] = val;
        }
        for(i = 1 ; i <= len ; i++)
        {
            for(k = 1 ; k <= len ; k++)
            {
                for(j = 1 ; j <= len ; j++)
                {
                    ans[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(i = 1 ; i <= len ; i++)
        {
            for(j = 1 ; j <= len ; j++)
            {
                if(j != 1) printf(" ");
                printf("%d", ans[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
