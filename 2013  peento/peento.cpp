#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int sum = 1;
		for(int i=n;i>1;i--){
			sum = 2*(sum+1);
		}
		cout<<sum<<endl;
	}
	return 0;
}