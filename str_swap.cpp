#include<iostream>
using namespace std;
void swap(char **s1,char **s2){
	char *temp=*s1;
	*s1=*s2;
	*s2=temp;
}
main(){
	char *str1="asif";
	char *str2="ali";
	swap(&str1,&str2);
	cout<<str1<<" "<<str2;
}  