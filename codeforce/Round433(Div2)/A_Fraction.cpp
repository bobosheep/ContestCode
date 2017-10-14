#include<bits/stdc++.h>
using namespace std;

vector<int> prime;
int n, index, gcd, turn;



void init()
{
    index = n / 2;
}

void sol()
{
    turn = 0;
    for(int i = index, j = index + 1 ; ; )
    {
        int a(i), b(j);
        if(b) while((a %= b) && (b %= a));
        gcd = a + b;
        if(i + j == n && gcd == 1)
        {
            cout << i << " " << j << endl;
            break;
        }
        else
        {
            if(i + j > n) i--;
            else j++;
        }
    }
}

int main()
{
    cin >> n;
    init();
    sol();


    return 0;
}
