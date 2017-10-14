#include<bits/stdc++.h>
using namespace std;

typedef long long lld;

lld n, sp, idx, tmax;
set<lld> exist;

int main()
{
    while(true)
    {
        scanf("%lld",&n);

        if(n == 0)
            break;

            if(n == 1)
            {
                cout << "1 3 4" <<endl;
                continue;
            }

            idx = 0;
            sp = n;
            tmax = n;
            exist.clear();

            while(true)
            {
                if(n == 1)
                {
                    cout << sp << " " << idx << " " << tmax << endl;
                    break;
                }

                idx ++;

                if(n & 1)
                {
                    n = 3 * n + 1;
                    if(exist.find(n) == exist.end())
                    {
                        exist.insert(n);
                    }
                    else
                    {
                        cout << sp << " " << "0 0" << endl;
                        break;
                    }
                }
                else
                {
                    n = n / 2;
                    if(exist.find(n) == exist.end())
                    {
                        exist.insert(n);
                    }
                    else
                    {
                        cout << sp << " " << "0 0" <<endl;
                        break;
                    }
                }
                tmax = max(tmax, n);
            }
    }


    return 0;
}

