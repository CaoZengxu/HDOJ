#include<iostream>
using namespace std;
int main() {
	int n;
	bool flag = false;
	while (cin >> n) {
		flag = false;
		int i = 1;
		while(i <= n) {
			if(n%i==0)
				flag = !flag;
			i++;
		}
		cout << flag << endl;
	}
	return 0;
}