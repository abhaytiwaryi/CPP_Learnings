#include<iostream>
using namespace std;
class Vehicle{ //Parent class
public:
	int topSpeed;
	float mileage;
	string fuel;
};
class TwoWheeler: public Vehicle{ //Child class / derived class
public:
	bool sunroof;

};
class FourWheeler : public Vehicle{ //Child class / derived class
public:
	
};
class Scooty : public TwoWheeler{ //Child class / derived class
public:
	
};
class Bike : public TwoWheeler{ //Child class / derived class
public:
	
};
int main(){
	

}