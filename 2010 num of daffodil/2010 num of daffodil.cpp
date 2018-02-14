#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a,b,c;
	while(cin>>m>>n){
		bool flag = false;
		if(n<m){
			int t = m;
			m = n;
			n = t;
		}

		for(int i=m;i<=n;i++){
			a = i % 10;
			b = (i/10) % 10;
			c = i/100;
			if((a*a*a+b*b*b+c*c*c)==i){
				
				if(flag)
					printf(" ");
				printf("%d",i );
				flag = true;
			}
		}

		if(!flag)
			printf("no");
		printf("\n");
	}

	return 0;

}