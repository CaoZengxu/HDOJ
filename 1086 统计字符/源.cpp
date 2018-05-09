#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
	char a[5],b[80];
	//gets_s(a);
	int c[5];
	while (gets_s(a)&&a[0]!='#') {
		gets_s(b);
		for (int i = 0; i < strlen(a); i++) {
			int count = 0;
			for (int j = 0; j < strlen(b); j++) {
				if (b[j] == a[i])
					count++;
			}
			c[i] = count;
		}
		for (int i = 0; i < strlen(a); i++)
		{
			printf("%c %d\n", a[i], c[i]);
		}
	}
	
	return 0;
}