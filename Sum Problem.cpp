#include<cstdio>
using namespace std;

int main(){
	int m;
	int sum = 0;
	while(~scanf("%d",&m)){
		sum = 0;
		for(int i=1;i<=m;i++){
			sum += i;
		}
		printf("%d\n",sum);
		printf("\n");
	}
	return 0;
}