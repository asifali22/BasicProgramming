#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter Value to be pushed:";
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    cout<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;
}