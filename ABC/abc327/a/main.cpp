#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int i = 0;
    while (i < s.size())
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cout << "Yes" << endl;
            return (0);
        }
        i++;
    }
    while (i > 0)
    {
        if (s[i] == 'a' && s[i - 1] == 'b')
        {
            cout << "Yes" << endl;
            return (0);
        }
        i--;
    }
    cout << "No" << endl;
    return (0);
}
