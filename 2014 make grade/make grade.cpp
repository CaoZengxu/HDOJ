#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		double sum = 0;
		double max = 0,min = 101;
		double score;
		for(int i=0;i<n;i++){
			cin>>score;
			sum += score;
			if(score>max)
				max = score;
			if(score<min)
				min = score;

		}
		sum = sum - min - max;
		printf("%.2f\n",sum/(n-2));

	}
}