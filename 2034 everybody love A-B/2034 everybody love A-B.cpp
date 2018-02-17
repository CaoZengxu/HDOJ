#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>n>>m&&(n!=0||m!=0)){
		int A[100],B[100];
		bool dead[100] = {false};
		for(int i=0;i<n;i++){
			cin>>A[i];
			dead[i] = true;
		}

		for(int i = n;i>=0;i--){
			for(int j=0;j<i-1;j++){
				if(A[j]>A[j+1]){
					int t = A[j];
					A[j] = A[j+1];
					A[j+1] = t;
				}
			}
		}

		for(int i=0;i<m;i++){
			cin>>B[i];
			for(int j=0;j<n;j++){
				if(A[j]==B[i]){
					dead[j] = false;
					break;
				}
				if(A[j]>B[i]) break;
			}
		}
		bool flag = false;
		for(int i=0;i<n;i++){
			if(dead[i]){
				flag = true;
				cout<<A[i]<<" ";
			}
		}
		if(!flag) cout<<"NULL";
		cout<<endl;
	}
	return 0;

}