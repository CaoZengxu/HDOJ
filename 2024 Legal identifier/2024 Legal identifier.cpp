#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
	int n;
	char s[50];
	
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		gets(s);
		bool flag = true;
		if((s[0]<'a'||s[0]>'z')&&(s[0]>'Z'||s[0]<'A')&&s[0]!='_'){
			cout<<"no"<<endl;
			flag = false;
		}else{
			for(int j=1;j<strlen(s);j++){
				//printf("%d\n",s[j]);
				if((s[j]<'0'||s[j]>'9')&&(s[j]<'a'||s[j]>'z')&&(s[j]>'Z'||s[j]<'A')&&s[j]!='_'){
					cout<<"no"<<endl;
					flag = false;
					break;
				}

			}	
		}
		if(flag)
			cout<<"yes"<<endl;
	}


	return 0;

}