#include<iostream>
using namespace std;


int main() {
	int m;
	int N;
	cin >> N;
	for(int j=0;j<N;j++){
		cin >> m;
		int g = 0, f = 1;
		while (m--) {
			f += g;
			g = f - g;
		}
		cout <<g<< endl;
	}
	return 0;
}