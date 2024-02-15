#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > y)
    {
        if (x - y > 3)
        {
            cout << "No" << endl;
            return (0);
        }
        else
        {
            cout << "Yes" << endl;
            return (0);
        }
    }
    else
    {
        if (y - x > 2)
        {
            cout << "No" << endl;
            return (0);
        }
        else
        {
            cout << "Yes" << endl;
            return (0);
        }
    }
    return (0);
}
