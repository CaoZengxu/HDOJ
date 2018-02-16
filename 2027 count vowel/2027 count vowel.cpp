#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	char s[100];
	cin>>n;
	cin.ignore();

	for(int k=0;k<n;k++){
		int a=0,e=0,i=0,o=0,u=0;
		gets(s);
		for(int j=0;j<strlen(s);j++){
			if(s[j]=='a') a++;
			if(s[j]=='e') e++;
			if(s[j]=='i') i++;
			if(s[j]=='o') o++;
			if(s[j]=='u') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(k!=(n-1))
		cout<<endl;
	}
	return 0;

}