#include<iostream>
using namespace std;
int f(char x) {
	int ans;
	if (x >= 'A'&&x <= 'Z')
		return x - 'A' + 1;
	else
		return -(x - 'a' + 1);
}
int main() {
	char x;
	int y;
	int n;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		cout << f(x) + y << endl;

	}
	return 0;
}