#include<bits/stdc++.h>
using namespace std;

int n;
string s;
vector<int> num;
int sum, sub;
int ans;

void init()
{
    sum = sub = ans = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        int cur = s[i] - '0';
        num.push_back(cur);
        sum += cur;
    }
    sub = n - sum;
    sort(num.begin(), num.end());
}

void sol()
{
    if(sub < 0)
    {
        cout << 0;
        return;
    }
    for(int i = 0 ; i < num.size() ; i++)
    {
        int cur_sub = 9 - num[i];
        if(sub > 0)
        {
            sub = (sub > cur_sub) ? sub - cur_sub : 0;
            ans++;
        }
    }
    cout << ans ;
}

int main()
{
    cin >> n >> s;
    init();
    sol();
    return 0;
}
