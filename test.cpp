#include <iostream>
#include <string>
using namespace std;
string reverse(string);
int main()
{
    int testCase;
    cin>>testCase;
    string final[11][30], input;
    if (testCase<=10)
    {
    
        for(int n = 0; n<testCase;n++){
        cin>>input;
        final[n][30] = reverse(input);
        }
        for (int i = 0; i < testCase; ++i)
        {
        cout<<final[i][30]<<endl;
        }
    }
    return 0;
}

string reverse(string input){
    for(int i=0, j=input.size()-1; i<input.size()/2;i++,j--){
        input[i] ^= input[j];
        input[j] ^= input[i];
        input[i] ^= input[j];
    }
    return input;
}