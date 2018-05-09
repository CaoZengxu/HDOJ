#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
//#define max 100010

typedef struct {
	int Id;
	char name[10];
	int grade;
}Stu;

bool cmp1(Stu a, Stu b) {
	if(a.Id!=b.Id)
		return a.Id < b.Id;
	return false;
}

bool cmp2(Stu a, Stu b) {
	if(strcmp(a.name, b.name)!=0) return strcmp(a.name, b.name)<0;
	return a.Id<b.Id;
}

bool cmp3(Stu a, Stu b) {
	if(a.grade!=b.grade)
	  return a.grade < b.grade;
	return a.Id<b.Id;
}

int main() {
	int n, c;
	Stu students[10];
	int cas = 1;
	while (cin >> n >> c && (n != 0 || c != 0)) {
		for (int i = 0; i < n; i++) {
			cin >> students[i].Id;
			cin >> students[i].name;
			cin >> students[i].grade;
		}
		switch (c)
		{
		case 1:
			sort(students, students + n, cmp1);
			break;
		case 2:
			sort(students, students + n, cmp2);
			break;
		case 3:
			sort(students, students + n, cmp3);
			break;
		default:
			break;
		}
		printf("Case %d:\n", cas);
		for (int i = 0; i < n; i++) {
			printf("%06d %s %d\n",students[i].Id,students[i].name,students[i].grade);
		}
		cas++;
	}

	return 0;
}