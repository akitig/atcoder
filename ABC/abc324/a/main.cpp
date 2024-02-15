#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    cin >> n;

    int i = 1;
    int max;
    cin >> max;

    while (i < n)
    {
        cin >> a;
        if (max != a)
        {
            cout << "No" << endl;
            return (0);
        }
        i++;
    }
    cout << "Yes" << endl;
    return (0);
}
