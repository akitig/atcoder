#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,l;
    cin >> n >> l;
    int ans = 0;

    int i = 0;
    while (i < n)
    {
        int a;
        cin >> a;
        if (a >= l)
            ans++;
        i++;
    }
    cout << ans << endl;
    return (0);
}

