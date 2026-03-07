#include <iostream>
using namespace std;

class Vehicle {

protected:
  string brand;
  int speed;

public:
  void setVehicle(string b, int s) {
    brand = b;
    speed = s;
  }
  void showVehicle() {
    cout<<"Brand:"<< brand << endl;
    cout<<"Speed:"<< speed << "km/h"<< endl;
  }
};

class Car: public Vehicle {
protected:
  int seats;
public:
  void setCar(int s) {
    seats = s;
  }
  void showCar() {
    showVehicle();
    cout<<"Seats:"<< seats << endl;
  }
};

class ElectricCar: public Car {
private:
    int batteryRange;
public:
  void setElectricCar(int range) {
    batteryRange= range;
  }
  void showElectricCar() {
    showCar();
    cout<<"Battery Range:"<< batteryRange <<"km"<< endl;
  }
};

int main() {
  ElectricCar e1;
  e1.setVehicle("Tesla", 120);
  e1.setCar(5);
  e1.setElectricCar(450);

  cout<<"Electric Car Details:\n";
  e1.showElectricCar();

  return 0;
}
