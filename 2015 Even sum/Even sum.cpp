#include<iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		int mflag = 0;
		int nnum = 2;
		int sum = 0;
		for(int i=0;i<n;i++){
			sum += nnum;
			nnum += 2;
			mflag++;
			if(mflag == m){
				cout<<sum/m;
				if(i<(n-1))
					cout<<' ';
				mflag = 0;
				sum = 0;
			}
		}
		if(mflag>0)
			cout<<sum/mflag;
		cout<<endl;
	}
	return 0;
}