#include<iostream>
using namespace std;

int main(){
	int n;
	int s[100];
	while(cin>>n){
		int max = 0;
		int t = 0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]>max)
				max = s[i];
		}
		//3 2 5 7cout<<"max1:"<<max<<endl;
		t += max;
		bool flag = false;
		while(!flag){
			int count = 0;
			for(int i=0;i<n;i++){
				if(t%s[i] == 0){
					count++;
				}
			//	cout<<"max2:"<<max<<endl;
			}
			if(count==n){
				flag = true;
			}else{
				t += max;
			}
			//cout<<"max3:"<<max<<endl;
		}
		//cout<<"max4:"<<max<<endl;
		cout<<t<<endl;
	}
		
		
}
