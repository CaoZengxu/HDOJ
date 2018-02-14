#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n&&n!=0){
		int minNum = 0;
		int t;
		for(int i=0;i<n;i++){
			cin>>t;
			minNum += t/100;
			t %= 100;
			minNum += t/50;
			t %= 50;
			minNum += t/10;
			t %= 10;
			minNum += t/5;
			t %= 5;
			minNum += t/2;
			t %= 2;
			minNum += t;
		}
		cout<<minNum<<endl;
	}
	return 0;

}