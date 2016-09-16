#include <iostream>
using namespace std;

#define SIZE 100

class stack
{
	int stck[SIZE];
	int tos;
public:
	stack();
	~stack();
	void push(int i);
	int pop();
};

stack :: stack(){
	tos = 0;
	cout<<"Initialized"<<endl;
} 

stack :: ~stack(){
	cout<<"Destroyed"<<endl;
}


void stack :: push(int i){
	if (tos == SIZE)
	{
		cout<<"Overflow\n";
		return;
	}

	stck[tos++] = i;
	
}

int stack :: pop(){
	if (tos == 0)
	{
		cout<<"Underflow\n";
		return 0;
	}

	return stck[--tos];
}

int main()
{
	stack obj1, obj2;
	
	obj1.push(1);
	obj1.push(3);
	obj1.push(5);
	obj2.push(15);
	obj2.push(20);
	obj2.push(25);

	cout<< obj1.pop() <<" ";
	cout<< obj1.pop() << " ";
	cout<< obj1.pop() << "\n";
	cout<< obj2.pop() <<" ";
	cout<< obj2.pop() << " " ;
	cout<< obj2.pop() << "\n";
	

	return 0;
}