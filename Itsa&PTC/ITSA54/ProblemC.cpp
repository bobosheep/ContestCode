#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> line(1, 1), ans;
    int num, i, j;
    while(cin >> num)
    {
        for(i = 1 ; i <= num ; i++)
        {
            ans.clear();
            for(j = 0 ; j < line.size() ; j++)
            {
                if(j == 0) ans.push_back(1);
                else
                    ans.push_back(line.at(j - 1) + line.at(j));
            }
            if(i != 1)  ans.push_back(1);
            line = ans;
            for(j = 0 ; j < ans.size() ; j++)
            {
                if(j) cout << " ";
                cout << ans.at(j);
            }
            cout << endl;
        }
        line.clear();
        line.push_back(1);
    }

    return 0;
}
