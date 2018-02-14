#include<iostream>
using namespace std;
int main(){
	int grade;
	while(scanf("%d",&grade)!=EOF){
		if(grade<0||grade>100){
			cout<<"Score";
			cout<<' ';
			cout<<"is";
			cout<<' ';
		cout<<"error!"<<endl;
		}
		else if(grade<=59)
			printf("E\n");
		else if(grade<=69)
			printf("D\n");
		else if(grade<=79)
			printf("C\n");
		else if(grade<=89)
			printf("B\n");
		else if(grade<=100)
			printf("A\n");

	}
	return 0;
}