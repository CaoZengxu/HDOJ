#include<iostream>
using namespace std;
/*
int calculate(int a) {
	if (a == 1)
		return 3;
	if (a == 2||a==3)
		return 6;
	if (a > 3) {
		int op = 2;
		int b = a - 3;
		b--;
		while (b--) {
			op *= op;
		}

		return 9 * op;
	}
}
*/
/*
首先f(1) = 3,f(2) = 6,f(3) = 6
对于n>3的情况，２如果有n个方格，当对第n个方格填色时，有两种情况：

　　　　　１）应该已经对前面n-1个方格填好了色，有f(n-1)种情况，此时第n-1个跟第一个颜色一定不一样，所以第n个只有一种选择。
　　　　　２）对前面n-2个方格填好色，有f(n-2)种情况，第n-1个空格颜色跟第一个颜色一样（否则就成了上面那种情况了），只有一种可能，最后第n个方格可以填两种颜色（因为n-１和１是第同种颜色），所以是　２*f(n-2);

                   可以推出f(n)=f(n-1)+2(n-2),n>=4;

*/
int main() {
	int n;
	long long num[51];
	num[1] = 3;
	num[2] = 6;
	num[3] = 6;
	for (int i = 4; i < 51; i++){
		num[i] = num[i - 1] + 2*num[i - 2];
	}
	while (cin >> n) {
			cout <<num[n] << endl;
	}
	return 0;
}