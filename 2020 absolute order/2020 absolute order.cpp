#include<iostream>
using namespace std;

int getAb(int a){
	if(a<0)
		return -a;
	return a;
}

int main(){
	int n;

	while(cin>>n&&n!=0){
		int s[110];
		int t;
		for(int i=0;i<n;i++){
			cin>>s[i];
		}


		for(int j=n;j>1;j--){
			for(int i=0;i<j-1;i++){
				if(getAb(s[i])<getAb(s[i+1])){
					t = s[i];
					s[i] = s[i+1];
					s[i+1] = t;
				}
			}
		}

		for(int i=0;i<n;i++){
			//if(i>0)
				
			cout<<s[i];
			if(i<n-1)
				cout<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}