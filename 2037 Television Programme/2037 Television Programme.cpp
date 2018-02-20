#include<iostream>
using namespace std;

typedef struct{
	int start,end;
}Show;

int main(){
	int n;
	Show in[100];
	Show ok[100];
	while(cin>>n&&n!=0){
		int okNum = 0;

		Show cu;
		for(int i=0;i<n;i++){
			cin>>cu.start>>cu.end;
			int OBNUM = 0;
			bool flag = false;
			int bad;
			int time = cu.end - cu.start;
			for(int j=0;j<okNum;j++){
				if((cu.start<ok[j].end&&cu.start>=ok[j].start)||(cu.end<=ok[j].end&&cu.end>ok[j].start)||(cu.start<=ok[j].start&&cu.end>=ok[j].end)){
					if(time<(ok[j].end-ok[j].start)) flag = true;
					OBNUM++;
					bad = j;
				}
			}
			if(flag&&OBNUM==1){
				ok[bad].start = cu.start;
				ok[bad].end = cu.end;
			}
			if(OBNUM==0){
				//cout<<cu.start<<" "<<cu.end<<endl;
				ok[okNum].start = cu.start;
				ok[okNum].end = cu.end;
				okNum++;
			}
		}
		cout<<okNum<<endl;
		/*
		for(int i=0;i<okNum;i++){
			cout<<ok[i].start<<" "<<ok[i].end<<endl;
		}
		*/
	}
	return 0;

}