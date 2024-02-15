#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    int i = 0;
    int ans = 0;
    while (i < n)
    {
        int s;
        cin >> s;
        if (s <= x)
            ans += s;
        i++;
    }
    cout << ans << endl;
    return (0);
} 

