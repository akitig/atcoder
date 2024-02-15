#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> v(m);
    for (int vi = 0; vi < m; vi++)
    {
        cin >> v.at(vi);
    }
    vector<vector<int>> data(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    int count = 0;
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans = c;
        for (int j = 0; j < m; j++)
        {
            ans += v[j] * data[i][j];
        }
        if (ans > 0)
            count++;
    }
    cout << count << endl;
    return (0);
}
