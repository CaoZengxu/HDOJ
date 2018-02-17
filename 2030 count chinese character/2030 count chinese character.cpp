#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[100];
	int n;
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		int count = 0;
		gets(s);
		//for(int j=0;j<strlen(s);j++)
		//	cout<<s[j];
		//cout<<endl;
		for(int j=0;j<strlen(s);j++){
			//cout<<(s[j]>>7)<<endl;
			if((s[j]>>7)==-1)
				count++;
		}
		cout<<count/2<<endl;

	}


}