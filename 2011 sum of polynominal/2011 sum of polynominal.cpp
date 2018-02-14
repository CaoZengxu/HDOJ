#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m){
		
		for(int j=0;j<m;j++){
			double f = 1;
			double sum = 0;
			cin>>n;
			for(double i=1;i<=n;i++){
				sum += (1/i)*f;
				f = -f;
			}
			printf("%.2f\n",sum);
		}
	}
	return 0;
}