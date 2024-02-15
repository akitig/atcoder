#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,s,k;

	cin >> n >> s >> k;
	int ans = 0;
	int p,q;

	for (int i = 0; i < n; i++)
	{
		cin >> p >> q;
		ans += p * q;
	}
	
	if (ans < s)
		ans += k;
	
	cout << ans << endl;
	return (0);
}
