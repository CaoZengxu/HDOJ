#include<iostream>
using namespace std;
int main() {
	char a;
	int level;
	bool flag = false;
	while (cin >> a && a != '@') {
		cin >> level;
		int lastNum = 1 + 2 * (level-1);
		int spaceNum = lastNum / 2;
		int heart = 2;
		if (flag) cout << endl;
		for (int i = 0; i <(level-1); i++)
		{
			for (int k = 0; k < spaceNum; k++)
				cout << ' ';
			spaceNum--;
			for (int j = 0; j < (1+2*i); j++) {
				if (j == 0 || j ==2*i)
					cout << a;
				else
					cout << ' ';
			}
			cout << endl;
		}
		for (int i = 0; i < lastNum; i++)
			cout << a;
		cout <<endl;
		
		flag = true;
	}
	return 0;
}