#include<iostream>
using namespace std;
#define max 10000

int getAb(int a){
	if(a<0)
		return -a;
	return a;
}

int main(){
	int m,n;
	//int M[max][max];
	while(cin>>m>>n){
		int x,y,s = 0;
		int t;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
			
				cin>>t;
				//M[i][j] = t;
				if(getAb(s)<getAb(t)){

					s = t;
					x = i;
					y = j;

				}
			}
		}

		cout<<x<<' '<<y<<' '<<s<<endl;

	}
	return 0;
}