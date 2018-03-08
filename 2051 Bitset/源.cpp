#include<iostream>
using namespace std;
int main() {
	int n;
	int s[11];
	int len = 0;
	while (cin >> n) {
		len = 0;
		while (n) {
			len++;
			s[len] = n % 2;
			n /= 2;
		}
		for (int i = len; i > 0; i--)
			cout << s[i];
		cout << endl;

	}
	return 0;

}