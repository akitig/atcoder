#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    int i;
    i = 0;
    while (i < n)
    {
        cin >> v.at(i);
        i++;
    }
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {

            j++;
        }
        i++;
    }
}
