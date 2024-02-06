#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int i;
    int ans;
    i = 0;
    ans = 1;
    while (i < s.size())
    {
        if (s.at(i) == '+')
            ans++;
        else if (s.at(i) == '-')
            ans--;
        i++;
    }
    cout << ans << endl;
    return (0);
}