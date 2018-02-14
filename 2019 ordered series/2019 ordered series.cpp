#include<iostream>
using namespace std;

int main(){
	int n,m;
	
	while(cin>>n>>m&&(n!=0||m!=0)){
		int s[110];
		bool inserted = false;
		int t;
		for(int i=0;i<(n+1);i++){
			cin>>t;
			if(m<t&&!inserted){
				s[i] = m;
				i++;
				inserted= true;
			}
			s[i] = t;
		}
		for(int i=0;i<n+1;i++){
			cout<<s[i];
			if(i!=n)
				cout<<' ';
		}
		cout<<endl;

	}

	return 0;
}

