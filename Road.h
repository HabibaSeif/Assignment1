#pragma once
#include <iostream>
using namespace std;


const int currentyear = 2022;
int countA = 0, countB = 0, countC = 0, tempC = 0, tempB = 0, tempA = 0; // can be used as setters and getters

class Road {
private:
	char RoadType;
	int SpeedLimit;

public:
	Road();
	Road(char&, int);
	bool Radar(int, char);
	void allow(string);
	int age(int);
};

Road::Road()
{
	RoadType = ' ';
	SpeedLimit = 0;
}

Road::Road(char& roadtype, int speed)
{
	while ((roadtype != 'A') && (roadtype != 'a') && (roadtype != 'B') && (roadtype != 'b') && (roadtype != 'C') && (roadtype != 'c'))
	{
		cout << "Invalid roadtype please re-enter: " << endl;
		cin >> roadtype;
	}
	RoadType = roadtype;
	SpeedLimit = speed;
}

bool Road::Radar(int carspeed, char roadtype)
{
	if ((roadtype == 'A' || roadtype == 'a') && (carspeed > 100))
	{
		cout << "This car will be fined in Road A ";
		return true;
	}
	else if ((roadtype == 'B' || roadtype == 'b') && (carspeed > 60))
	{
		cout << "This car will be fined in Road B ";
		return true;
	}
	else if ((roadtype == 'C' || roadtype == 'c') && (carspeed > 40))
	{
		cout << "This car will be fined in road C ";
		return true;
	}

	else
	{
		return false;
	}

}


void Road::allow(string cartype) {
	if ((cartype == "Private") || (cartype == "private") || (cartype == "Motorcycle") || (cartype == "motorcycle"))
	{
		cout << "Road A is allowed and Road B is allowed but Road C is not allowed" << endl;
		countA++;
		countB++;

	}
	else if ((cartype == "Truck") || (cartype == "truck"))
	{
		cout << "Road C is allowed and Road B is allowed but Road A is not allowed" << endl;
		countC++;
		countB++;
	}
	else if ((cartype == "Bus") || (cartype == "bus"))
	{
		cout << "Only road B is allowed and both Road A and Road C are not allowed" << endl;
		countB++;
	}
}

int Road::age(int yearmodel)
{
	int age;
	age = (currentyear - yearmodel);
	return age;
}