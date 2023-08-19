#include <iostream>
using namespace std;

//Create class Vehicle which contains :
//-Model(string)
//- Reg_number(string)
//- Speed(int)
//- Fule_capacity(double)
//- Fule_consumption(double)
//- Default & parameterized constructors
//- Setters & getters
//- Double fuelNeeded(int dis) = > method that will take distance then calculate the amount of fuel that will be needed for that distance as follow :
//(fuelNeeded = fuelConsumption * distance).
//- double distanceCovered(int hours) = > method that will take time(in hours)
//as an argument and calculate the distance for the given number of hours as
//follow : (distance = vehicleSpeed * hours)
//- display method that will display vehicle information .

class Vehicle {
protected:
	string Model;
	string Reg_number;
	int Speed;
	double Fule_capacity;
	double Fule_consumption;
public:
	Vehicle() {
		Model = " ";
		Reg_number = " ";
		Speed = 0;
		Fule_capacity = 0;
		Fule_consumption = 0;
	}
	Vehicle(string m, string reg, int s, double cap, double con) {
		Model = m;
		Reg_number = reg;
		Speed = s;
		Fule_capacity = cap;
		Fule_consumption = con;
	}
	void set_vehicle(string m, string reg, int s, double cap, double con) {
		Model = m;
		Reg_number = reg;
		Speed = s;
		Fule_capacity = cap;
		Fule_consumption = con;
	}
	string get_model() {
		return Model;
	}
	string get_reg() {
		return Reg_number;
	}
	int get_speed() {
		return Speed;
	}
	double get_cap() {
		return Fule_capacity;
	}
	double get_con() {
		return Fule_consumption;
	}
	double fuelNeeded(int dis) {
		return Fule_consumption * dis;
	}
	double distanceCovered(int hours) {
		return Speed * hours;
	}
	void display() {
		cout << "Vehicle is " << Model << " Reg Number :" << Reg_number << " and speed " << Speed << endl;
	}
};

//Create class Truck which inherits from Vehicle class and contains
//following attributes :
//-cargo_weight_limit(int)
//- Default & parameterized constructors
//- A display() method which will call parent display() to print Truck information, and it will print cago_weight_limit with other Truck information's .

class Truck : public Vehicle{
private:
	int cargo_weight_limit;
public:
	Truck() {
		cargo_weight_limit = 0;
	}
	Truck(int c) {
		cargo_weight_limit = c;
	}
	void display() {
		cout << "Truck weight "<< cargo_weight_limit << endl;
	    Vehicle::display();
	}
};

//Create class Bus which inherits from Vehicle class and contains following attributes
//- Number_of_passengers(int)
//- Default & parameterized constructors
//- A display() method which will call parent display() to print Bus information, and it will print Number_of_passengers with other Bus information's .

class Bus : public Vehicle{
private:
	int Number_of_passengers;
public:
	Bus() {
		Number_of_passengers = 0;
	}
	Bus(int n) {
		Number_of_passengers = n;
	}
	void display() {
		cout << "Bus Passengers " << Number_of_passengers << endl;
		Vehicle::display();
	}
};
int main()
{
	//-Create 3 objects – object of each class, then print each object information .
	Vehicle v;
	v.display();
	Truck t(10);
	t.display();
	Bus b(30);
	b.display();
}