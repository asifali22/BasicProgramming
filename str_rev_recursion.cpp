#include<iostream>
using namespace std;
void my_rev(char *r,int i){
	if(r[i]=='\0')
		return ;
	my_rev(r,i+1);
	cout<<r[i];
}
main(){
	char s1[100]="asif";
	my_rev(s1,0);
	cout<<endl;
}