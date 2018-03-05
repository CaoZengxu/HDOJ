#include<iostream>
using namespace std;
int main() {
	int n;
	int a, b;
	long long num[53];
	num[1] = 1;
	num[2] = 2;
	for (int i = 3; i < 53; i++)
		num[i] = num[i - 1] + num[i - 2];
	
	while (cin >> n) {
		cout << num[n] << endl;
	}

	return 0;
}