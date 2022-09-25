#include <iostream>
#include <queue>
#include "Car.h"
#include "Road.h"
using namespace std;

queue<Car>carsQueue;

void fillQ()
{
	Car a("Ford", 240, 2022, "Private", "ABD123");
	Car b("Toyota", 200, 2013, "Truck", "BDE345");
	Car c("Hyundai", 280, 2013, "Motorcycle", "GHD678");
	Car d("Bentely", 240, 2011, "Private", "YYU678");
	Car e("Rols Royce", 230, 2010, "Private", "GHD989");
	Car f("Toyota", 220, 2009, "Truck", "YSB334");
	Car g("Nissan", 40, 2007, "Motorcycle", "SDF123");
	Car h("Hyundai", 50, 2005, "Bus", "USD223");
	Car i("Ferrari", 10, 2003, "Private", "GHD123");
	Car j("BMW", 29, 2000, "Truck", "ADG169");
	carsQueue.push(a);
	carsQueue.push(b);
	carsQueue.push(c);
	carsQueue.push(d);
	carsQueue.push(e);
	carsQueue.push(f);
	carsQueue.push(g);
	carsQueue.push(h);
	carsQueue.push(i);
	carsQueue.push(j);


	int z = 0;
	while (!carsQueue.empty()) {
		z++;
		Car car;
		car = carsQueue.front();
		carsQueue.pop();
		Road checkcar;
		tempC = countC;
		tempB = countB;
		tempA = countA;
		cout << "--------------------------" << endl;
		cout << "Car Number " << z << endl;
		cout << "--------------------------" << endl;
		checkcar.allow(car.getCarType());
		if ((tempA + 1) == countA)
		{
			if (checkcar.Radar(car.getSpeed(), 'A') == true)
			{
				cout <<  " the car that will be fined has a car plate of: " << car.getCarPlate() << " is a type of: " << car.getCarType() << " with a speed of : " << car.getSpeed() << " and has a car brand of : " << car.getCarBrand() << " and a year model of : " << car.getYearModel() << " It's current age is: " << checkcar.age(car.getYearModel()) << endl;
			}
		}

		if ((tempB + 1) == countB)
		{
			if (checkcar.Radar(car.getSpeed(), 'B') == true)
			{
				cout  << " the car that will be fined has a car plate of: " << car.getCarPlate() << " is a type of: " << car.getCarType() << " with a speed of : " << car.getSpeed() << " and has a car brand of : " << car.getCarBrand() << " and a year model of : " << car.getYearModel() << " It's current age is: " << checkcar.age(car.getYearModel()) << endl;
			}
		}

		if ((tempC + 1) == countC)
		{
			if (checkcar.Radar(car.getSpeed(), 'C') == true)
			{
				cout << " the car that will be fined has a car plate of: " << car.getCarPlate() << " is a type of: " << car.getCarType() << " with a speed of: " << car.getSpeed() << " and has a car brand of: " << car.getCarBrand() << " and a year model of: " << car.getYearModel() << " It's current age is: " << checkcar.age(car.getYearModel()) << endl;
			}
		}
		checkcar.age(car.getYearModel());
	}
}

int LargestRoad(int A, int B, int C)
{
	int t = max(A, B);
	t = max(t, C);
	if (t == A)
	{
		return countA;
	}
	else if (t == B)
	{
		return countB;
	}
	else
	{
		return countC;
	}
}

int main()
{
	fillQ();
	cout << endl;
	cout << "---------------------------------" << endl;
	cout << "EFFICIENCY: " << endl;
	if (LargestRoad(countA, countB, countC) == countA)
	{
		cout << "A has the largest amount of cars" << endl;
		cout << "The efficiency in A is 100%" << endl;
		cout << "The efficiency in B is " << ((((float(countB)) / (countA)) * 100)) << "%" << endl;
		cout << "The efficiency in C is " << (((float(countC) / (countA)) * 100)) << "%" << endl;
	}
	else if (LargestRoad(countA, countB, countC) == countB)
	{
		cout << "B has the largest amount of cars " << endl;
		cout << "The efficiency in B is 100%" << endl;
		cout << "The efficiency in A is " << (((float(countA) / (countB)) * 100)) << "%" << endl;
		cout << "The efficiency in C is " << (((float(countC) / (countB)) * 100)) << "%" << endl;
	}
	else if (LargestRoad(countA, countB, countC) == countC)
	{
		cout << "C has the largest amount of cars " << endl;
		cout << "The efficiency in C us 100%" << endl;
		cout << "The efficiency in B is " << (((float(countB) / (countC)) * 100)) << "%" << endl;
		cout << "The efficiency in A is " << (((float(countA) / (countC)) * 100)) << "%" << endl;
	}

}