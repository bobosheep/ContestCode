#include<iostream>
using namespace std;

int main()
{
    int i, num, j;
    while(cin >> num)
    {
        for(i = 1 ; i <= num ; i++)
        {
            for(j = num ; j >= 1 ; j--)
            {
                if(j > i) cout << " ";
                else cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
