#include<iostream>
using namespace std;
int main(){
	int n;
	double a,b,c;
	while(cin>>n&&n!=0){
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			if((a+b)>c&&(a+c)>b&&(b+c)>a)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;

}