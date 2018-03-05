#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n;
	cin >> n;
	char s[50];
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		int len = strlen(s);
		bool flag[4] = { false };
		if (len > 16 || len < 8) {
			cout << "NO"<<endl;
		}
		else {
			for (int j = 0; j < len; j++) {
				if (s[j] >= 'A'&&s[j] <= 'Z') flag[0] = true;
				if (s[j] >= 'a'&&s[j] <= 'z') flag[1] = true;
				if (s[j] >= '0'&&s[j] <= '9') flag[2] = true;
				if (s[j] == '~' || s[j] == '!' || s[j] == '@' || s[j] == '#' || s[j] == '$' || s[j] == '%' || s[j] == '^') flag[3] = true;
			}
			int count = 0;
			for (int j = 0; j < 4; j++)
				if (flag[j]) count++;
			if (count >= 3)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
	return 0;
}