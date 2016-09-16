#include<iostream>
#include<string.h>
using namespace std;

void isPangram() {
    int i;
    int count = 0;
    char str[27];
    cout << "Enter a string to check if its Pangram or not: ";

    // Read the string
    cin >> str;

    short flagArr[26]; // Array to flag the characters used
    memset(flagArr, 0, sizeof(flagArr));
    bool panGramFlag = true;

    // Loop through the string and mark the characters read
    for (int i = 0; i < 27; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            flagArr[str[i]-'A'] = 1;
        }
    }

    // Loop through flag array and check if any character is not used.
    for (int i = 0; i < 26; i++) {
        if (flagArr[i] == 0) {
           panGramFlag = false;
           cout << "It is not Pangram" << endl;
           break;             
        }
    }   

    if (panGramFlag)
        cout << "it is Pangram" << endl;

}

int main() {

    isPangram();
}  


/*

// string reverse with recursion
void revString(char *r, int i){
	if (r[i] == '\0')
		return;
	revString(r, i+1);
	cout<<r[i];
}

int main()
{
	char str[100];
	cin.getline(str,100);
	revString(str, 0);
	cout<<endl;
	return 0;
}

*/