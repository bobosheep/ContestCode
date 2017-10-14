#include<iostream>
using namespace std;

int main()
{
    int i, num, ans(0);
    while(cin >> num)
    {
        for(i = 0 ; i <= num ; i++)
            ans += i;
        cout << ans << endl;
    }
    return 0;
}
