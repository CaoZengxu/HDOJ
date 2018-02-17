#include<iostream>
using namespace std;
int main(){
	int N,R;
	char s[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while(cin>>N>>R&&R!=10){

		int t = R;
		if(N<0){
			N = -N;
			cout<<'-';
		}

		while(N>0){
			if((N/t) >= R){
				t *= R;
			}else{
				
				if(N>t){
					cout<<s[(N/t)];
					N = N%t;
					
				}else if(N<R){

					cout<<s[N];
					N = 0;
				}
				t = t/R;
			}

		}
		cout<<endl;

	}
	return 0;
}