#include<cstdio>
#include<cstring>
using namespace std;

char* sum(char a[],char b[]){

	char s[1002];
	char r[1002];
	int maxlen ;
	int alen = strlen(a);
	int blen = strlen(b);
	for(int i=0;i<maxlen;i++)
		s[i] = '0';
	if(alen>=blen)
		maxlen = alen;
	else
		maxlen = blen;
	int aflag = alen-1,bflag = blen - 1,sflag = maxlen;
	bool up = false;
	int aint,bint;
	while(aflag>=0&&bflag>=0){
		aint = a[aflag--] - '0';
		bint = b[bflag--] - '0';
		if(up){
			if(((aint+bint+1)/10)>0)
				up = true;
			else
				up = false;
		}else{
			if(((aint+bint)/10)>0)
				up = true;
			else
				up = false;
		}
		
		
		if(up)
			s[sflag--] += (aint + bint+1)%10; 
		else
			s[sflag--] += (aint + bint)%10; 
	}

	while(aflag>=0){
		aint = a[aflag--] - '0';
		s[sflag--] += aint; 
	}

	while(bflag>=0){
		bint = b[bflag--] - '0';
		s[sflag--] += bint; 
	}

	if(sflag==-1){
		for(int i=0;i<=maxlen;i++)
			r[i] = s[i];
	}else{
		for(int i=1;i<=maxlen;i++)
			r[i-1] = s[i];
	}
	printf("%s\n",s);
	//printf("%s\n",r);
	return r;

	

}

int main(){
	int n;
	
	int alength,blength;
	char *a,*b;
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++){
			scanf("%s %s",&a,&b);
			char *r = sum(a,b);
			printf("Case %d:\n",i+1);
			
			printf("%s + %s = %s\n\n",a,b,r);
		}

	}
	return 0;
}