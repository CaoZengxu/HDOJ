#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n&&n!=0){
		int num[100];
		int minflag = 0;
		int t;
		for (int i = 0; i < n; ++i){
			cin>>num[i];
			if(num[i]<num[minflag])
				minflag = i;		
		}	
		t = num[0];
		num[0] = num[minflag];
		num[minflag] = t;
		for(int i=0;i<n;i++){
			cout<<num[i];
			if(i!=n-1)
				cout<<' ';
		}
		cout<<endl;

	}
	return 0;
}