#pragma once
#include <iostream>
using namespace std;


class Car {
private:
	string CarBrand;
	string CarType;
	string CarPlate;
	int Speed;
	int YearModel;
	static int count;
public:
	Car();
	Car(string, int, int, string, string);
	void setCarBrand(string);
	void setCarType(string&);
	void setCarPlate(string&);
	void setSpeed(int);
	void setYearModel(int&);
	string getCarBrand();
	string getCarType();
	string getCarPlate();
	int getSpeed();
	int getYearModel();
	static int getcount();
};

int Car::count = 1;

int Car::getcount()
{
	return count;
}

Car::Car()
{
	CarBrand = CarType = CarPlate = " ";
	Speed = YearModel = 0;
}

Car::Car(string carbrand, int maxspeed, int yearmodel, string cartype, string carplate)
{
	setCarBrand(carbrand);
	setSpeed(maxspeed);
	setYearModel(yearmodel);
	setCarType(cartype);
	setCarPlate(carplate);
	++count;
}

void Car::setCarBrand(string carbrand)
{
	CarBrand = carbrand;
}

void Car::setCarType(string& cartype) 
{
	while ((cartype != "Private") && (cartype != "private") && (cartype != "Bus") && (cartype != "bus") && (cartype != "Motorcycle") && (cartype != "motorcycle") && (cartype != "Truck") && (cartype != "truck"))
	{
		cout << "Invalid car Type in car: " << count << " please re - enter the type : ";
		cin >> cartype;
	}
	CarType = cartype;
}


void Car::setCarPlate(string& carplate)
{
	int c = 1;
	for (int i = 0; i < carplate.length(); i++)
	{
		while (carplate.length() != 6)
		{
			cout << "Please enter a car plate for car " << count << " in which it has 3 capital letters and 3 numbers: ";
			cin >> carplate;
		}
		if (c <= 3)
		{
				while ((!isalpha(carplate[i])) || (!isupper(carplate[i])))
				{
					cout << "Invalid carplate for car " << count << " please re - enter 3 upper case letters and 3 numbers: ";
					cin >> carplate;
				}
		}
		else
		{
				while (!isdigit(carplate[i]))
				{
					cout << "Invalid carplate for car " << count << " please re - enter 3 upper case letters and 3 numbers: ";
					cin >> carplate;
				}
		}

		c++;

	}
	CarPlate = carplate;
}

void Car::setSpeed(int speed)
{
	Speed = speed;
}

void Car::setYearModel(int& yearmodel)
{
	while ((yearmodel > 2022) || (yearmodel < 0))
	{
		cout << "Not a valid year in car " << count << " please enter a year that is equal to or under the year 2022 (positive value)" << endl;
		cin >> yearmodel;
	}
	YearModel = yearmodel;
}

string Car::getCarBrand()
{
	return CarBrand;
}

string Car::getCarPlate()
{
	return CarPlate;
}

string Car::getCarType()
{
	return CarType;
}

int Car::getSpeed()
{
	return Speed;
}

int Car::getYearModel()
{
	return YearModel;
}
