#include <iostream>
#include <string>
using namespace std;

class Pet { // creates the class called Pet

public: // functions
  void SetType(string inputType);
  void SetName(string inputName); // sets the pet name
  void SetAge(int inputAge); // sets pet age
  void SetWeight(double inputWeight);
  void Print();
private: // variables unique to each function
  string petType;
  string petName;
  int petAge;
  double petWeight;

};

void Pet::SetType(string inputType) { // gets the type of pet
  petType = inputType;
}

void Pet::SetName(string inputName) { // gets the name of the pet
  petName = inputName;
}

void Pet::SetAge(int inputAge) { // gets the age of the pet
  petAge = inputAge;
}

void Pet::SetWeight(double inputWeight) { // gets the weight of the pet
  petWeight = inputWeight;
}

void Pet::Print() { // prints the pet information
  cout << "Type: " << petType << endl << "Name: " << petName << endl << "Age: " << petAge << endl << "Weight: " << petWeight << " lbs" << endl << endl;
}

int main() {
  // the two pets:
  Pet Dog;
  Pet Cat;

  // setting each charachteristic of the dog
  Dog.SetType("Dog");
  Dog.SetName("Max");
  Dog.SetAge(10);
  Dog.SetWeight(120);

  // setting each charachteristic of the cat
  Cat.SetType("Cat");
  Cat.SetName("Sunny");
  Cat.SetAge(4);
  Cat.SetWeight(30);

  cout << "Pets: " << endl;

  // using the print function on the pets to print their information
  Dog.Print();
  Cat.Print();

  return 0;
}
