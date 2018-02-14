#include<iostream>
using namespace std;
int main(){

	int a = 0,b = 0,c = 0;
	int n;
	double t;
	while(cin>>n&&n!=0){
			a = 0;
			b = 0;
			c = 0;
		for(int i=0;i<n;i++){
			cin>>t;

			if(t<0)
				a++;
			if(t==0)
				b++;
			if(t>0)
				c++;
		}
		cout<<a<<' '<<b<<' '<<c<<endl;
	}
	return 0;
}