#include<iostream>
#include<cstring>
using namespace std;
#define max 100
int main(){
	char s[max];
	while(cin>>s){
		char maxc = 0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]>maxc)
				maxc = s[i];
		}

		for(int i=0;i<strlen(s);i++){
			cout<<s[i];
			if(s[i]==maxc)
				cout<<"(max)";
		}
		cout<<endl;
	}
	return 0;
}