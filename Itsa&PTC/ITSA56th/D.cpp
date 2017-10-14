#include<bits/stdc++.h>
using namespace std;

int ncase, nheap;
int nmoney[10005];
int cnt, cnt1;

int main()
{
    cin >> ncase;
    while(ncase--)
    {
        cin >> nheap;
        cnt = cnt1 = 0;
        for(int i = 0 ; i < nheap ; i++)
        {
            cin >> nmoney[i];
            if(nmoney[i] == 1)
                cnt1++;
            else cnt++;
        }
        if(nheap == 1)
            cout << "yes" << endl;
        else
        {
            if((cnt + cnt1) % 2 == 1 || (cnt * 2 + cnt1) % 2 == 1)
                cout << "yes\n";
            else cout << "no\n";
        }
    }

    return 0;
}
