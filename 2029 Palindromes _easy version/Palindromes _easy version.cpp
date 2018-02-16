#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	char s[100];
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>s;
			bool flag = true;
			for(int j=0;j<strlen(s)/2;j++){
				if(s[j]!=s[strlen(s)-1-j])
					flag = false;
			}
			if(flag)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;	
		}
	}
	return 0;
}