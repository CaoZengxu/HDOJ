#include<iostream>
using namespace std;
int main(){
	int N;
	int result = 1;
	int t;
	while(cin>>N){
		result = 1;
		for(int i=0;i<N;i++){
			cin>>t;
			if(t%2!=0)
				result*=t;
		}
		cout<<result<<endl;

	}

	return 0;
}