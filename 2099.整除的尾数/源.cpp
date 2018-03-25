#include<iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b&&(a!=0||b!=0)) {
		int number = 0;
		int ans[1000];
		a *= 100;
		for (int i = 0; i < 100; i++) {
			if ((a + i) % b == 0){
				ans[number++] = i;
			}
		}
		//cout << ans[0];
		for (int i = 0; i < number; i++) {
			if (i == 0)
				printf("%02d", ans[i]);
			else
				printf(" %02d", ans[i]);
		}
		cout << endl;
	}

	return 0;
}