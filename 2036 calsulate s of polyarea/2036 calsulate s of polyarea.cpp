#include<iostream>
#include<cmath>
using namespace std;
typedef struct{
	double x,y;
}Coordinate;

int main(){
	int n;
	Coordinate point[100];

	while(cin>>n&&n!=0){
		for(int i=0;i<n;i++)
			cin>>point[i].x>>point[i].y;
		
		double ax = 0,ay = 0,bx = 0,by = 0;
		double s = 0;
		for(int i=0;i<n-1;i++){

			ax = point[i].x;
			ay = point[i].y;
			bx = point[i+1].x;
			by = point[i+1].y;
			//printf("ax:%f ay:%f bx:%f by:%f\n",ax,ay,bx,by);
			s += (ax*by - bx*ay)/2;
			
			
		}
		s += (point[n-1].x*point[0].y - point[0].x*point[n-1].y)/2;
		printf("%.1f\n",s);
		
	}
	return 0;
}