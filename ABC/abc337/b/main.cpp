#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char now = 'A';
    int i = 0;
    while (i < s.size())
    {
        if (s.at(i) != 'A')
            i++;
        i++;
    }
}
