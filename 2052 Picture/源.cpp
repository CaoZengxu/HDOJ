#include<iostream>
using namespace std;
int main() {
	int n, m;
	while (cin >> n >> m) {
		
		cout << '+';
		for (int i = 0; i < n; i++) cout << '-';
		cout << '+';
		cout << endl;
		while (m--) {
			cout << '|';
			for (int i = 0; i < n; i++) cout << ' ';
			cout << '|';
			cout << endl;
		}
		cout << '+';
		for (int i = 0; i < n; i++) cout << '-';
		cout << '+';
		cout << endl;
		cout << endl;
	}
	return 0;
}