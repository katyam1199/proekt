#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> l = {};
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        l.push_back(num);
    }
    auto min_it = (min_element(l.begin(), l.end()));
    int min = *min_it;
    int amount = count(l.begin(), l.end(), min);
    if (amount != 2)
    {
        cout << 0;
        return 0;
    }
    else
    {
        amount = 0;
        auto sub_it = min_it;
        for (auto it = ++sub_it; *it != *min_it; it++)
        {
            amount++;
        }
        cout << amount;
        return 0;
    }
}