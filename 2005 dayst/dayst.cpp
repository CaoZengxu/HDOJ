#include<iostream>
#include<cstring>
using namespace std;
int main(){
		
	char date[100];
	while(scanf("%s",date)!=EOF){
		
		int yearStart = 0,yearEnd = 0,monStart = 0,monEnd = 0,dayStart = 0,dayEnd = 0;
		int ylen,mlen,dlen;
		int ynum = 0;
		int mnum = 0;
		int dnum = 0;
		int result = 0;
		bool flag = false;
		int i;
		for(i=0;date[i]!='/'&&i<strlen(date);i++);
		yearEnd = i - 1;
		monStart = yearEnd + 2;	
		for(i=monStart;date[i]!='/'&&i<strlen(date);i++);
		monEnd = i - 1;
		dayStart = monEnd+2;
		for(i=dayStart;date[i]!='/'&&i<strlen(date);i++);
		dayEnd = i - 1;
		ylen = yearEnd - yearStart + 1;
		mlen = monEnd - monStart + 1;
		dlen = dayEnd - dayStart + 1;
		//printf("yearStart:%d yearEnd:%d monStart:%d monEnd:%d dayStart:%d dayEnd:%d\n",yearStart,yearEnd,monStart,monEnd,dayStart,dayEnd);

		int t;

		for(int j = yearStart;j<=yearEnd;j++){
			t = date[j] - '0';
			for(int k = j;k<yearEnd;k++)
				t*=10;
			ynum+=t;
		}

		if(ynum%4==0&&ynum%100!= 0||ynum%400==0)
			flag = true;

		for(int j = monStart;j<=monEnd;j++){
			t = date[j] - '0';
			//printf("t:%d\n",t);
			for(int k = j;k<monEnd;k++)
				t*=10;
			//printf("t:%d\n",t);
			mnum += t;
		}
		
		for(int j = dayStart;j<=dayEnd;j++){
			t = date[j] - '0';
			for(int k = j;k<dayEnd;k++)
				t*=10;
			dnum+=t;
		}
		
		for(int k=1;k<mnum;k++){
			if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
				result += 31;
			else if(k!=2)
				result += 30;
			if(k==2){
				if(flag)
					result += 29;
				else
					result += 28;
			}

		}
		//printf("%d %d %d\n",ynum,mnum,dnum);
		result += dnum;
		cout<<result<<endl;
		//printf("%d\n",result);
	}


	return 0;
}