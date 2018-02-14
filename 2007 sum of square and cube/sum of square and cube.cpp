#include<iostream>
using namespace std;
int main(){
	int a,b;
	int t;
	int sumOfSquare,SumOfCube;
	while(scanf("%d %d",&a,&b)!=EOF){
		sumOfSquare = 0; 
		SumOfCube = 0;
		if(b<a){
			t = a;
			a = b;
			b = t;
		}
		for(int i=a;i<=b;i++){
			if(i%2==0)
				sumOfSquare += i*i;
			if(i%2!=0)
				SumOfCube += i*i*i; 
		}
		cout<<sumOfSquare<<" "<<SumOfCube<<endl;
	}
	return 0;
}