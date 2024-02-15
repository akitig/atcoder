#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int m,d,y,t,h;

	cin >> m >> d >> y >> t >> h;

	if (h == d)
		t += 1;
	if (t >= m)
		cout << y + 1 << " " << 1;
	else
		cout << y << " " << t;
	cout << " ";

	if (h == d)
		cout << 1;
	else
		cout << h + 1;
	cout << endl;
	return (0);
}
