#include<iostream>
#include<string>
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
		int i= 0;
		string ans = "";
		while(N>0){
			ans = s[N%R] + ans;
			N/=R;
		}
		cout<<ans<<endl;

	}
	return 0;
}