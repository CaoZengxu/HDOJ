#include<iostream>
#include<cmath>
using namespace std;
int main(){
 	float x1,y1,x2,y2;
	double d = 0;
	while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF){
		/*
		printf("%f %f %f %f\n",x1,y1,x2,y2);
		double t = (y2-y1)*(y2-y1);
		printf("%.2f\n",t);
		t = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
		printf("%.2f\n",t);*/
		d = sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
		printf("%.2f\n",d);

	}
	
	return 0;
}