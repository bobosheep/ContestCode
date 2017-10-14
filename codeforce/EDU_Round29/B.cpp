#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> people, dif;
int ans;


void init()
{
    cin >> n;
    ans = 0;
    for(int i = 0 ; i < n * 2 ; i++)
    {
        int tmp;
        cin >> tmp;
        people.push_back(tmp);
    }
    sort(people.begin(), people.end());

}

void sol()
{
    for(int i = 0 ; i < peopel.size() ; i++)
    {
        for(int j = i + 1 ; j < people.size() ;  j++)
        {
            for(int k = 0 ; k < n - 1 ; )
            {

            }
        }
    }
    cout << ans << endl;
}


int main()
{

    init();
    sol();

    return 0;
}
