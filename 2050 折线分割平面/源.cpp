#include<iostream>
using namespace std;

int main() {
	int c;
	int a;
	long long p[10001];
	p[0] = 1;
	p[1] = 2;
	p[2] = 7;
	for (int i = 3; i <= 10000; i++)
		p[i] = p[i - 1] + 4 * i - 3;
	cin >> c;
	while (c--) {
		cin >> a;
		cout << p[a] << endl;
	}
	return 0;
}





/*

交点数 + 1


解题思路：
１递推递推，先分析下直线分割平面的情况，增加第n条直线的时候，
跟之前的直线最多有n-1个交点，此时分出的部分多出了（n-1）+1；

２折线也是同理，f(1)=2,f(2)=7,先画好前面n-1条折线，
当增加第n条拆线时，此时与图形新的交点最多有2*2（n-1）个，
所以分出的部分多出了２*２（n-1）+1　　　所以推出f(n)=f(n-1)+4*(n-1)+1,n>=3

*/