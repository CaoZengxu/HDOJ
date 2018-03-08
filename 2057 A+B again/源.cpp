#include<iostream>
#include<cstring>
using namespace std;
char h[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
int main() {
	char A[16], B[16];
	while (cin >> A >> B) {
		char hexAns[16];
		int Astart = 0, Bstart = 0;
		bool Aflag = true, Bflag = true;
		if (A[0] == '-') {
			Aflag = false;
			Astart++;
		}else if (A[0] == '+'){
			Aflag = true;
			Astart++;
		}
		if (B[0] == '-') {
			Bflag = false;
			Bstart++;
		}else if (B[0] == '+') {
			Bflag = true;
			Bstart++;
		}
		long long Anum = 0;
		long long Bnum = 0;
		for (int i = strlen(A) - 1; i >= Astart; i--) {
			long long magicNumber = 1;
			for (int j = strlen(A)-1; j>i; j--)
				magicNumber *= 16;
			if (A[i] >= 'A'&&A[i] <= 'Z')
				Anum += (A[i] - 'A' + 1 + 9)*magicNumber;
			else if (A[i] >= '0'&&A[i] <= '9')
				Anum += (A[i] - '0')*magicNumber;
		}
		for (int i = strlen(B) - 1; i >= Bstart; i--) {
			long long magicNumber = 1;
			for (int j = strlen(B) - 1; j >i; j--)
				magicNumber *= 16;
			if (B[i] >= 'A'&&B[i] <= 'Z')
				Bnum += (B[i] - 'A' + 10)*magicNumber;
			else if (B[i] >= '0'&&B[i] <= '9')
				Bnum += (B[i] - '0')*magicNumber;
		}
		if (!Bflag)
			Bnum = -Bnum;
		if (!Aflag)
			Anum = -Anum;
		long long ans = Anum + Bnum;
		int i = 0;
		if (ans == 0)
			cout << 0;
		if (ans < 0) {
			cout << '-';
			ans = -ans;
		}
			
		while (ans) {
			hexAns[i++] = h[ans % 16];
			ans /= 16;
		}
		
		for (int j = i-1; j >= 0; j--) {
			cout << hexAns[j];
		}
		cout << endl;

	}
	return 0;
}