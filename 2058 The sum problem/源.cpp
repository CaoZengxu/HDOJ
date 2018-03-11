#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N, M;
	while (cin >> N >> M && (N != 0 || M != 0)) {
		int k = sqrt(2 * M);
		for (int i = k; i >0&&i<=N; i--) {
			int t = M - i * (i + 1) / 2;//t = a*i
			if (!(t%i))
				printf("[%d,%d]\n", t / i + 1, t / i + i);
		}
		cout <<endl;
	}
	return 0;
}

/*
   
*/