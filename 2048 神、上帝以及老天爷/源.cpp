#include<iostream>
using namespace std;
long long calculate(double a) {
	long long ans = 1;
	while (a) {
		ans *= a--;
	}
	return ans;
}


int main() {
	double c;
	int a;
	double p[21];
	p[1] = 0;
	p[2] = 1;
	for (int i = 3; i < 21; i++) {
		p[i] = (i - 1)*(p[i - 1] + p[i - 2]);
	}
	cin >> c;
	while (c--) {
		cin >> a;
		printf("%.2lf%%\n", 100*p[a]/calculate(a));

	}
	return 0;
}