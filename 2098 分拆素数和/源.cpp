#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a) {
	bool isP = true;
	for (int j = 2; j <= sqrt(a); j++) {
		if (a%j == 0) {
			isP = false;
			break;
		}
	}
	return isP;
}
int main(){
	int n;
	//int prime[10000];
	int num = 0;
	

	while (cin >> n && n != 0) {
		int ans = 0;
		int jk = 0;
		for (int i = 2; i < n / 2; i++) {
			if (isPrime(i) && isPrime(n - i)) {
				ans++;
			}
		}
		//cout <<"n:"<< n << endl;
		cout << ans << endl;

	}

	return 0;
}