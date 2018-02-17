#include<iostream>
using namespace std;
 int main(){
 	int N;
 	int  AH,AM,AS,BH,BM,BS;
 	int SH,SM,SS;
 	cin>>N;
 	for(int i=0;i<N;i++){
 		cin>>AH>>AM>>AS>>BH>>BM>>BS;
 		SH = AH + BH;
 		SM = AM + BM;
 		SS = AS + BS;
 		SM += SS/60;
 		SS %= 60;
 		SH += SM/60;
 		SM %= 60;
 		cout<<SH<<' '<<SM<<' '<<SS<<endl;
 	}
 	return 0;

 }