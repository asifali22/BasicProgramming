#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
main(){
	char str1[100],str2[100];
	cin.getline(str1,100);
	cin.getline(str2,100);
	sort(str1,str1+strlen(str1));
	sort(str2,str2+strlen(str2));
	if(strcmp(str1,str2)==0)
		cout<<"Anagram";
	else
		cout<<"not  anagram";
}