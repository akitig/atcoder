#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	cin >> s;

	if (isupper(s[0]))
	{
		int i;
		i = 1;
		while (islower(s[i]))
			i++;
		if (i == s.length())
		{
			cout << "Yes" << endl;
			return (0);
		}
		else
		{
			cout << "No" << endl;
			return (0);
		}

	}
	else
	{
		cout << "No" << endl;
		return (0);
	}
}
