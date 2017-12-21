#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

vector<ll> task, worker;
ll n, m;
ll ans;


void init()
{
    ans = 0;
    cin >> n >> m;
    task.clear();
    worker.clear();
    for(int i = 0 ; i < n ; i++)
    {
        ll tmp;
        scanf("%lld", &tmp);
        task.pb(tmp);
    }
    for(int i = 0 ; i < m ; i++)
    {
        ll tmp;
        scanf("%lld", &tmp);
        worker.pb(tmp);
    }
    sort(task.begin(), task.end());
    //for(auto i : task)
    //    cout << i << " ";
    //cout << endl;
    sort(worker.begin(), worker.end());
}

void sol()
{
    for(int i = 0, j = 0 ; i < n  ; )
    {
        if(j >= m)
        {
            ans = -1;
            break;
        }
        if(worker[j] >= task[i])
        {
            ans += worker[j] * worker[j];
            i++;
            j++;
        }
        else j++;
    }
    cout << ans << endl;
}

int main()
{
    int ncase;
    cin >> ncase;
    while(ncase--)
    {
        init();
        sol();
    }


    return 0;
}
