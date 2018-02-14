#include<iostream>
using namespace std;

int main(){
	double a;
	while(scanf("%lf",&a)!=EOF){
		if(a<0)
			a = -a;
		printf("%.2f\n",a);
	}
	return 0;
}