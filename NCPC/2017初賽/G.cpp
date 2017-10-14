#include <bits/stdc++.h>
using namespace std;

const int MAX = 10009;
int adjlist[MAX], len, cnt;
bool exist[MAX];


int main()
{
    bool str(1);
    while(1)
    {
        scanf("%d", &len);
        if(len == 0)
            break;
        if(!str) cout << endl;
        str = 0;
        cnt = 0;
        memset(exist, 0, sizeof(exist));

        for(int i = 1; i <= len; i++)
        {
            scanf("%d", &adjlist[i]);
            exist[adjlist[i]] = true;
        }

        int firstele = 0;
        for(int i = 1; i <= len; i++)
        {
            if(adjlist[i] == 0)
                firstele++;
        }

        cout << firstele;

        for(int i = 1; i <= len; i++)
        {
            if(exist[i] == 0)
            {
                int x=i;
                int cnt1(1);
                while(adjlist[x] != 0)
                {
                    x = adjlist[x];
                    cnt1++;
                }

               cout << " " << i << " " << cnt1;
            }

        }
    }

    return 0;
}
