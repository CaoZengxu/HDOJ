#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int M;
	cin>>M;
	int a,b;
	int sa,sb;
	for(int i=0;i<M;i++){
		sa = 0;
		sb = 0;
		cin>>a>>b;
		int sqrta = sqrt(a);
		int sqrtb = sqrt(b);
		//printf("sqrta:%d sqrtb:%d\n",sqrta,sqrtb);
		for(int i=1;i<a;i++){
			if(a%i==0){
				sa += i;
				//cout<<i<<endl;
			}
		}
		for(int i=1;i<b;i++){
			if(b%i==0){
				sb += i;
			}
		}
		if(sa==b&&sb==a)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}