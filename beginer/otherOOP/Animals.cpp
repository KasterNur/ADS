#include <iostream>     // Header files
using namespace std;

class Animal{    // class name
  string animalName;      // class data member
  public:
  Animal(string name);   // Animal constructor
  void animalSound();    // Member function declaration
  void printName();
};

Animal :: Animal(string name){   // function defintion
  animalName = name;
}
void Animal :: animalSound(){
  cout << "Woof Woof!" << endl;
}
void Animal :: printName(){
  cout << animalName << endl;
}

int main(){
  Animal a("Dog");    // creating object of class Animal
  a.printName();  // calling member function 
  a.animalSound();  // calling member function
}