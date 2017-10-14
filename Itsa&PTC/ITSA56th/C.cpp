#include<bits/stdc++.h>
using namespace std;

int n, input, total, sum, num;
vector<int> money;
vector<int> n_money;
char s[10005];

int main()
{
    cin >> n;
    getchar();
    while(n--)
    {
        money.clear();
        n_money.clear();
        gets(s);
        num = 0;
        for(int i = 0 ; i < strlen(s) ; i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                if(i && s[i - 1] >= '0' && s[i - 1] <= '9')
                    num = num * 10 + s[i] - '0';
                else num = s[i] - '0';
            }
            if(s[i] == ' ')
            {
                if(!money.size() || num != money[money.size() - 1] )
                    money.push_back(num);
                num = 0;
            }
        }
        total = num;
        sum = 0;
        for(int i = 0 ; i < money.size() ; i++)
        {
            int cnt(0);
            cnt = total / money[i];
            total %= money[i];
            n_money.push_back(cnt);
            sum += cnt;
        }

        cout << sum << endl;
        for(int i = 0 ; i < n_money.size() ;i++)
        {
            cout << money[i] << " " << n_money[i] << endl;
        }
        if(!n) cout << endl;

    }



    return 0;
}
