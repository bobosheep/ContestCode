
#include<bits/stdc++.h>
using namespace std;

map<char, int> s;
char c1, c2;
int n, p1, p2;

int fl(int x)
{
    return x > 0 ? x : x + 4;
}

void init()
{
    s['^'] = 0;
    s['>'] = 1;
    s['v'] = 2;
    s['<'] = 3;
    cin >> c1 >> c2;
    p1 = s[c1];
    p2 = s[c2];
    cin >> n;
}

void sol()
{
    if(fl(p2 - p1) == n % 4 && fl(p1 - p2) == n % 4)
        cout << "undefined";
    else if(fl(p2 - p1) == n % 4)
        cout << "cw";
    else if(fl(p1 - p2) == n % 4)
        cout << "ccw";
    else cout << "undefined";
}

int main()
{
    init();
    sol();

    return 0;
}
