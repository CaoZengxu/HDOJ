#include<stdio.h>
#include<string.h>
void process(char[]);
int main(void)
{
	char a[100000], b[100000];
	int i, j;

	while (scanf("%s %s", a, b) != EOF)
	{
		process(a);
		process(b);
		if (strcmp(a, b))
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;

}
void process(char a[])
{
	int i, j, len, dot = -1;

	len = strlen(a);
	for (i = 0; i <= len - 1; i++)
	{
		if (a[i] == '.')
		{
			dot = i;
			break;
		}
	}
	if (dot >= 0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			if (a[i] != '0')
				break;
			else
				a[i] = '\0';
		}
		if (a[i] == '.')
			a[i] = '\0';
	}
}