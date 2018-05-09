#include<iostream>
using namespace std;
int getnum(int a) {
	if (a == 1)
		return 1;
	if (a == 2)
		return 2;
	int ans = 0;
	int t = a;
	while (t >= 2) {

		ans += t;
		t -= 2;
		ans += getnum(t);
		ans--;

	}
	return ans;

}

int main() {
	
	int ans[121];
	ans[0] = 0;
	ans[1] = 1;
	ans[2] = 2;
	for (int i = 3; i < 121; i++) {
		ans[i] = i;
		ans[i] += ans[i - 2];
		ans[i]--;

	}
	
	int n;
	while (cin >> n) {
		
		cout << getnum(n) << endl;
	}
	return 0;
}