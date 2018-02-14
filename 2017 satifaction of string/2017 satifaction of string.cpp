#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	char s[100];
	int result = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		result = 0;
		cin>>s;
		for(int j = 0;j<strlen(s);j++){
			if(s[j]>='0'&&s[j]<='9')
				result ++;
		}
		cout<<result<<endl;
	}
	return 0;
}