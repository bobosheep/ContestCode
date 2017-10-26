#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> per;
ll n, k, ans;


int main()
{
    while(cin >> n >> k)
    {
        per.clear();
        ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            ll tmp ;
            cin >> tmp;
            per.push_back(tmp);
        }
        ans = per[0];
        for(int i = 0, j = 1 ; i < n && j < n ; )
        {
            //cout << ans << " " << per[i] << " " << per[j]<< endl;
            if(per[j] > per[i])
            {
                if(j - i > k)
                {
                    ans = per[i];
                    break;
                }
                else if(j == n - 1)
                {
                    ans = per[j];
                    break;
                }
                else
                {
                    i = j;
                    j++;
                }
                ans = per[i];
            }
            else j++;
        }
        cout << ans << endl;
    }
    return 0;
}

