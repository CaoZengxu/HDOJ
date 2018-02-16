#include<iostream>
using namespace std;

typedef struct {
	double grades[5];
	double averageGrade;
}Student;

int main(){
	int n,m;
	while(cin>>n>>m){
		Student s[50];//story information of every student
		double aveGrades[5] = {0};//average grades of every peoject
		int goodStu = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>s[i].grades[j];
				aveGrades[j] += s[i].grades[j];
			}
		} 

		for(int i=0;i<m;i++){
			aveGrades[i] = aveGrades[i]/n; 
		}

		for(int i=0;i<n;i++){
			double sum = 0;
			int count = 0;
			for(int j=0;j<m;j++){
				if(s[i].grades[j]>=aveGrades[j])
					count++;
				sum += s[i].grades[j];
			}
			if(count == m)
				goodStu++;

			s[i].averageGrade = sum/m;
			
		}

		for(int i=0;i<n;i++){
			if(i>0)
				cout<<' ';
			printf("%.2f",s[i].averageGrade);
		}
		cout<<endl;
		for(int i=0;i<m;i++){
			if(i>0)
				cout<<' ';
			printf("%.2f",aveGrades[i]);
			
		}
		cout<<endl;
		cout<<goodStu<<endl<<endl;
	}
	return 0;
}