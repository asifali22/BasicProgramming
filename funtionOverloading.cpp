#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

void stringAdd(char* s1, char* s2);
void stringAdd(char* s1, int i);

int main(){
	char str[80];
	strcpy(str, "hello ");
	stringAdd(str, "there");
	cout<<str<<endl;

	stringAdd(str, 80);
	cout<<str<<endl;

	return 0;

}
void stringAdd(char* s1, char* s2){
	strcat(s1, s2);
}

void stringAdd(char* s1, int i){
	char temp[80];
	// conversion from integer to string
	sprintf(temp, "%d", i);
	strcat(s1, temp);
}