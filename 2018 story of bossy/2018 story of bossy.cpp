#include<iostream>
using namespace std;
int main(){
	int n;
	
	while(cin>>n&&n!=0){
		int adult = 1,age0 = 0,age1 = 0,age2 = 0;
		for(int i = 1;i<n;i++){
			adult += age2;
			age2 = age1;
			age1 = age0;
			age0 = adult;
		}
		cout<<adult+age0+age1+age2<<endl;
	}
	return 0;
}