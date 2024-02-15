#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    ans += pow(a, b);
    ans += pow(b, a);

    cout << ans << endl;
    return (0);
}
