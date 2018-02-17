#include<iostream>
using namespace std;
int main(){

int a, b;
	while (~scanf("%d%d", &a, &b)&&(a||b)) {
		int sum = 1;
		while (b--){
			sum *= a;
			sum %= 1000;
		}
		printf("%d\n", sum);
	}
	return 0;

}