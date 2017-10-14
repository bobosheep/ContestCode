#include<bits/stdc++.h>
using namespace std;

char c;
int n;
int ans, cnt;

void sol()
{
    ans = cnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%c", &c);
        //cout << c;
        if(c >= 'A' && c <= 'Z')
        {
            //cout << c;
            cnt++;
            ans = max(cnt, ans);
        }
        else if(c == ' ')
            cnt = 0;
    }
    cout << ans << endl;
}


int main()
{
    cin >> n;
    getchar();
    sol();


    return 0;
}
