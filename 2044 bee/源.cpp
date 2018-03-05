#include<iostream>
using namespace std;
/*
int calculate(int a,int b) {
	if (b <= a)
		return 0;
	if ((b - a) == 1)
		return 1;
	if ((b - a) == 2)
		return 2;
	if ((b - a) > 2) {
		return calculate(a + 1, b) +  calculate(a + 2, b);
	}
}
*/

int main() {
	int n;
	int a, b;
	long long num[53];
	num[1] = 1;
	num[2] = 2;
	for (int i = 3; i < 53; i++)
		num[i] = num[i - 1] + num[i - 2];
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << num[b-a] << endl;
	}
	return 0;
}