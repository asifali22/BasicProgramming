#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void goodString(string);
int main()
{
    int testCase;
    cin>>testCase;
    string input;
    if (testCase<=10)
    {
    
        for(int n = 0; n<testCase;n++){
      cin>>input;
        goodString(input);
        }
    }
    return 0;
}
void goodString(string input){
    string x(input);
     cout << x << "\n"; 
    x.erase(unique(x.begin(), x.end()), x.end());
    cout << x << "\n";
}
