#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[100];

	while(gets(s)){
		s[0] = s[0] - 32;
		for(int i=1;i<strlen(s);i++){
			if(s[i]==' ')
				s[i+1] = s[i+1] - 32;
		}
		cout<<s<<endl;
	}
	
	return 0;

}