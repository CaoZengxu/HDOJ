#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n && n != 0) {
		int cpyn = n;
		int decs[4];
		int hexs[4];
		int duos[4];
		bool flag = false;
		int dec = n;
		int hex = n;
		int duo = n;
		for (int i = 0; i < 4; i++) {
			decs[i] = dec % 10;
			dec /= 10;
			hexs[i] = hex % 16;
			hex /= 16;
			duos[i] = duo % 12;
			duo /= 12;
		}
		dec = 0;
		hex = 0;
		duo = 0;
		for (int i = 0; i < 4; i++) {
			dec += decs[i];
			hex += hexs[i];
			duo += duos[i];
		}
		if (dec == hex && hex == duo)
			flag = true;
		cout << n;
		if (flag)
			cout << " is a Sky Number." << endl;
		else
			cout << " is not a Sky Number." << endl;
	}
	return 0;
}