#include<iostream>
#include<string>
using namespace std;
int main(){
   string s="",table="0123456789ABCDEF";
   int m,n;

   while(cin>>m>>n){
      s = "";
      if(m<0){
            m=-m;
            cout<<"-";
         }
      if(m==0) cout<<'0'<<endl;
      while(m>0){
         
         s=table[m%n]+s;
         m/=n;
      }
      cout<<s<<endl;
   }
   return 0;
}