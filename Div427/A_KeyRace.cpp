#include<bits/stdc++.h>
using namespace std;

int s, v1, v2, t1, t2;
int cnt1, cnt2;
void sol()
{
    int start(0);
    cin >> s >> v1 >> v2 >> t1 >> t2;



    if(v1 * s + 2 * t1 < v2 * s + 2 * t2)
    {
        cout << "First";
    }
    else if(v1 * s + 2 * t1 > v2 * s + 2 * t2)
        cout << "Second";
    else cout << "Friendship";
}

int main()
{
    sol();
    return 0;
}
