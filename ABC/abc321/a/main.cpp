#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int i = 0;
    while (i < s.length())
    {
        if (s[i] <= s[i + 1])
        {
            cout << "No" << endl;
            return (0);
        }
        i++;
    }
    cout << "Yes" << endl;
    return (0);
}
