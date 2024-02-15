#include <stdio.h>

int is_big_alpha(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int main(void)
{
	char s[100];

	scanf("%s", s);

	int i;
	i = 1;

	if (is_big_alpha(s[0]))
	{
		while (s[i])
		{
			if (!is_big_alpha(s[i]))
				i++;
			else
			{
				printf("No\n");
				return (0);
			}
		}
		printf("Yes\n");
		return (0);
	}
	else
	{
		printf("No\n");
		return (0);
	}
}

