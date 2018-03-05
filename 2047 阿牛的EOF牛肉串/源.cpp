#include<iostream>
using namespace std;
int main() {
	
	
	long long int  num[51];
	num[1] = 3;
	long long int t = 1;
	for (int i = 2; i < 51; i++) {
		t = num[i - 1] - t;
		num[i] = t * 3 + (num[i - 1] - t) * 2;
	}

	while (cin >> a) {
		cout << num[a] << endl;
	}

	return 0;
	

}