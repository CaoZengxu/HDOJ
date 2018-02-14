#include<iostream>
#include<cmath>
using namespace std;

bool primeNum(int n){
	if(n<0)
		n = -n;
	if(n==2||n==3)
		return true;
	if(n%6!=1&&n%6!=5)
		return false;
	int t = sqrt(n);
	for(int i= 5;i<=t;i+=6){
		 if(n%i==0||n%(i+2)==0)
		 	return false;
	}
	return true;
}

int main(){

	int x,y;

	while(cin>>x>>y&&(x!=0||y!=0)){

		bool flag = true;
		if(x>y){
			int t = x;
			x = y;
			y = t;
		}

		for(int i=x;i<=y;i++){
			int m = i*i+i+41;
			if(!primeNum(m)){
				//cout<<"i:"<<i<<endl;
				flag = false;
				break;
			}
		}

		if(flag)
			cout<<"OK"<<endl;
		else
			cout<<"Sorry"<<endl;
		//cout<<endl;

	}
	return 0;

}