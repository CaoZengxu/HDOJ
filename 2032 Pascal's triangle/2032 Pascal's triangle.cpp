#include<iostream>
using namespace std;
int main(){
	int nextLayer[32] = {1};
	int N;
	int temp = 1;
	while(cin>>N){
		
		for(int i=1;i<=N;i++){
			int temp = 1;
			for(int j=1;j<=i;j++){
				if(j==1&&j!=i)
					cout<<1<<' ';
				else if(j==i){
					cout<<1<<endl;
					nextLayer[j] = 1 + temp;
				}else{
					cout<<nextLayer[j]<<' ';
					int tempb = temp;
					temp = nextLayer[j];
					nextLayer[j] = nextLayer[j] + tempb;

				}
				
			}
			
		}
		cout<<endl;
	}
	return 0;
}