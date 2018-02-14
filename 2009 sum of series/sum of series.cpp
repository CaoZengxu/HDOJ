#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double n;
	int m;
	double t;
	while(cin>>n>>m){

		t = 0;
		for(int i=0;i<m;i++){
			t += n;
			n = sqrt(n);
		}
		printf("%.2f\n",t);
	}
	return 0;
}