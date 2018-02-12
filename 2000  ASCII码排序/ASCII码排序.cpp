#include<iostream>
using namespace std;
int main(){

	char s[3];
	char t;
	while(scanf("%s",s)!=EOF){
		for(int i=0;i<3;i++){
			for(int j=0;j<2-i;j++){
				if(s[j]>s[j+1]){
					t = s[j];
					s[j] = s[j+1];
					s[j+1] = t;
				}
			}
		}
		//cout << s[0] << ' ' << s[1] << ' ' << s[2] << endl;
		
		for(int i=0;i<3;i++){
			cout<<s[i];
			if(i<2)
				cout<<' ';	
		}
		cout<<endl;
		
	}
	return 0;
}