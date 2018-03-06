#include<iostream>
using namespace std;

long long calculate(int n, int m) {
	long long a = 1;
	long long b = 1;
	for (int i = 0; i < n; i++) {
		a *= (m - i);
	}
	while (n) {
		b *= n--;
	}
	return a / b;
}

int main() {
	int N, M;
	int c;
	long long p[21];
	p[1] = 0;
	p[2] = 1;
	for (int i = 3; i < 21; i++)
		p[i] = (i - 1)*(p[i - 1] + p[i - 2]);
	cin >> c;
	while (c--) {
		cin >> N >> M;
		cout << calculate(M, N)*p[M] << endl;
	}
	return 0;
}