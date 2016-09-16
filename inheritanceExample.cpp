#include <iostream>
using namespace std;

class building
{
	int floors;
	int area;
public:
	void setFloor(int);
	int getFloor();
	void setArea(int);
	int getArea();
	
};

class house : public building
{
	int bedrooms;
public:
	void setBedrooms(int);
	int getBedrooms(); 
};

class school: public building
{	
	int bathrooms;
public:
		void setBathrooms(int);
		int getBathrooms();
};

void building:: setFloor(int i){
	floors = i;
}
void building:: setArea(int i){
	area = i;
}

int building:: getArea(){
	return area;
}

int building:: getFloor(){
	return floors;
}

void house:: setBedrooms(int i){
	bedrooms = i;
}

int house:: getBedrooms(){
	return bedrooms;
} 

void school:: setBathrooms(int i){
	bathrooms = i;
}

int school:: getBathrooms(){
	return bathrooms;
}

int main(){
	house h;
	school s;

	h.setArea(25000);
	h.setFloor(4);
	h.setBedrooms(2);

	s.setArea(45000);
	s.setFloor(10);
	s.setBathrooms(10);

	cout<<"House"<<endl;
	cout<<"Area: "<<h.getArea()<<endl;
	cout<<"Floor: "<<h.getFloor()<<endl;
	cout<<"Bedrooms: "<<h.getBedrooms()<<endl;

	cout<<"School"<<endl;
	cout<<"Area: "<<s.getArea()<<endl;
	cout<<"Floor: "<<s.getFloor()<<endl;
	cout<<"Bathrooms: "<<s.getBathrooms()<<endl;

}
















