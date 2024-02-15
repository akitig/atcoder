#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int i = 0;
    while (i < n)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            cout << i + 1 << endl;
            return (0);
        }
        i++;
    }
    cout << -1 << endl;
    return (0);
}
