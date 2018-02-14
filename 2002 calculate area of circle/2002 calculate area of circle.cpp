#include<iostream>
using namespace std;
#define PI 3.1415927
int main(){
	double r;
	double s;
	while(scanf("%lf",&r)!=EOF){
		s = PI*r*r*r*4/3;
		printf("%.3f\n",s);
	}
	return 0;
}