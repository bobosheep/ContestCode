#include<iostream>
#include<vector>
using namespace std;
long long bag[1005];
int main()
{
    int n;
    long long maxbag, w, v;
    int sth;
    vector<long long> weight, value;
    cin >> n;
    string name;
    while(n--)
    {
        for(int i = 0 ; i < 1005 ; i++)
            bag[i] = 0;
        cin >> maxbag >> sth;
        for(int i  = 0 ; i < sth ; i++)
        {
            cin >> w >> v >> name;
            weight.push_back(w);
            value.push_back(v);
        }
        sth = weight.size();
        for(int i = 0 ; i <= maxbag ; i++)
        {
                for(int j = 0; j < sth ; j++)
                {
                    if(i - bag[j] >= 0)
                    bag[i] = max(bag[i], bag[i - weight.at(j)]+ value.at(j));
                }
        }
        cout << "Total: " << bag[maxbag] <<endl;
    }

    return 0;
}
