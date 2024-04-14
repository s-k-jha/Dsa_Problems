#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> res;
    int x = 20;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            res.push_back(i);
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] % 2 == 0)
        {
            cout << res[i] << " ";
        }
    }
}
