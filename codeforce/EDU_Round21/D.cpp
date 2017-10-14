#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll setas, setbs;
    vector<int> seta, setb;
    int d[100005];
    int n, i, j, ans;
    bool isfind;
    cin >> n ;
    setas = setbs = 0 ;
    for(i = 0 ; i < n ; i++)
    {
        cin >> d[i];
    }
    if(n == 1)
    {
        cout << "NO\n";
        return 0;
    }
    if(n == 2)
    {
        if(d[0] == d[1])
            cout << "YES\n";
        else cout << "NO\n";
        return 0;
    }
    i = 0 ;
    j = n - 1;
    while(i <= j)
    {
        if(setas <= setbs)
        {
            setas += d[i];
            seta.push_back(d[i]);
            i++;
        }
        else
        {
            setbs += d[j];
            setb.push_back(d[j]);
            j--;
        }
    }
    if(setas > setbs)
    {
        ans = setas - setbs;
        if(ans & 1)
            cout << "NO\n";
        else
        {
            ans /= 2;
            isfind = false;
            for(i = 0 ; i < seta.size() ; i++)
            {
                if(seta.at(i) == ans)
                {
                    isfind = true;
                    break;
                }
            }
            if(isfind) cout << "YES\n";
            else
            {
                for(i = 0 ; i < seta.size() ; i++)
                {
                    if(seta.at(i) > setb.back())
                    {
                        if(setas - (seta.at(i) - setb.back()) == setbs + (seta.at(i) - setb.back()))
                        {
                            isfind = true;
                        }
                    }
                }
                if(isfind) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    else if(setas < setbs)
    {
        ans = setbs - setas;
        if(ans & 1)
            cout << "NO\n";
        else
        {
            ans /= 2;
            isfind = false;
            for(i = 0 ; i < setb.size() ; i++)
            {
                if(setb.at(i) == ans)
                {
                    isfind = true;
                    break;
                }
            }
            if(isfind) cout << "YES\n";
            else
            {
                for(i = 0 ; i < setb.size() ; i++)
                {
                    if(setb.at(i) > seta.back())
                    {
                        if(setbs - (setb.at(i) - seta.back()) == setas + (setb.at(i) - seta.back()))
                        {
                            isfind = true;
                        }
                    }
                }
                if(isfind) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    else cout << "YES\n";
    return 0;
}
